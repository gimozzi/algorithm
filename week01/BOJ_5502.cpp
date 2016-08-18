#include <iostream>
#include <string>
#include <vector>
#include <algorithm>    //reverse

using namespace std;

vector < vector < int > > arr;

int MAX (int a, int b) {
    if(a >= b) return a;
    else return b;
}

int LCS (const string& str1, const string& str2) {
    
    int len = 0;    //LCS len
    int N = str1.size(), M = str2.size();
    
    // 2차원 배열 assign
    arr.assign(M+1, vector<int>(N+1, 0));

    for(int i=1 ; i<M+1 ; i++){
        for(int j=1 ; j<N+1 ; j++){
            if(str1[j-1] == str2[i-1]){ 
                //2차원 배열은 0이 추가되어 행과 열의 길이가 각각
                //M+1, N+1 인 상태
                //그러나 원래의 문자열들은 0번째가 없으므로
                //index로 접근하려면 각각 -1 해줘야 됨
                arr[i][j] = arr[i-1][j-1] + 1;
                if(arr[i][j] > len)
                    len = arr[i][j];
            }
            else{
                arr[i][j] = MAX(arr[i][j-1], arr[i-1][j]);
            }
        }
    }

    return len;
}


int main (void) {

    int in;
    string str, reverse_str;
    cin >> in >> str;
    
    reverse_str = str;
    reverse(reverse_str.begin(), reverse_str.end());

    int num = LCS(str, reverse_str);

    cout << in - num << endl;

    return 0;
}
