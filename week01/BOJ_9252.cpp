#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <algorithm>

using namespace std;

// acm 문제 풀 때는 전역 변수 사용이 허용되는 부분
vector < vector < int > > arr;


int MAX (int a, int b) {
    if(a >= b) return a;
    else return b;
}

int LCS (const string& str1, const string& str2) {

    int len = 0;
    int N = str1.size(), M = str2.size();
    //vector<vector<int>> arr;  //왜 이렇게 붙여쓰면 안되죠?

    arr.assign(M+1, vector<int>(N+1, 0));
    // 0 행, 0 열 은 0으로 채워져야 되기 떄문에 M+1, N+1의 크기로 만듬

    for(int i=1 ; i<M+1 ; i++){
        for(int j=1 ; j<N+1 ; j++){
            if(str1[j-1] == str2[i-1]){
                //string 은 0이 추가되어 있지 않음...
                arr[i][j] = arr[i-1][j-1] + 1;
                if(arr[i][j] > len)
                    len = arr[i][j];
            }
            else{
                arr[i][j] = MAX(arr[i-1][j], arr[i][j-1]);
            }
        }
    }  

    return len;
}

string find_LCS (const string& str1, const string& str2) {

    string ret = "";
    int N = str1.size(), M = str2.size();
    int i = M, j = N;

    /*
     *  아래 구현한 방법은 완성된 LCS array 로 부터 역추적하는 방법임
     *  다른 방법은 LCS array를 만들어 가는 과정에서 
     *  LCS array의 value가 된 부분이 온 방향(대각선 or 십자(위, 왼쪽))을
     *  또 다른 array에 저장하는 방법
     */
    while(1){
        if(arr[i][j] == 0)
            break;

        //str1과 str2 는 array 보다 i, j 에서 1씩 작게 해야됨
        //str1: j, N
        //str2: i, M
        if(str1[j-1] == str2[i-1]){
            ret.push_back(str1[j-1]);
            i--;
            j--;
        }
        else{
            if(arr[i-1][j] >= arr[i][j-1]){
                i--;
            }
            else{
                j--;
            }
        }
    }

    return ret;
}


int main (void) {

    string str1, str2;
    cin >> str1 >> str2;

    int len = LCS(str1, str2);
    string lcs = find_LCS(str1, str2);
    reverse(lcs.begin(), lcs.end());
    cout << len << endl;
    cout << lcs << endl;
    return 0;
}
