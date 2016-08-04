#include <iostream>     //cin, cout
#include <string>       //string
#include <vector>       //vector
#include <cstdio>       //printf
#include <algorithm>    //sort

using namespace std;

vector<int> getPartialMatch(const string& N){
    
    int m = N.size();
    vector<int> pi(m, 0);
    int begin = 1, matched = 0;
    
    while(begin + matched < m){
        if(N[begin + matched] == N[matched]){
            ++matched;
            pi[begin + matched -1] = matched;
        }
        else{
            if(matched == 0)
                ++begin;
            else{
                begin += matched - pi[matched - 1];
                matched = pi[matched - 1];
            }
        }
    }

    return pi;    
}

vector<int> getPrefixSuffix(const string& S){
    vector<int> ret;
    vector<int> pi = getPartialMatch(S);

    int k = pi.size();
    
    while(k > 0){
        ret.push_back(k);
        k = pi[k-1];
    }

    return ret;

}
/*
 *                     1 1 1 1 1 1 1 1
 * 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7  //index 이고 size는 18
 * a b a b c a b a b a b a b c a b a b  // 입력된 문장 합친 str
 * 0 0 1 2 0 1 2 3 4 3 4 3 4 5 6 7 8 9  // partial match table
 *   *   *         *                 *, *: 18
 * k = pi[k-1] 하게되면 18 -> 9 -> 4 -> 2 -> 0(*로 표시된 부분들)
 
 *
 */

int main (void) {

    string str1, str2;
    string str;

    cin >> str1 >> str2;
    str = str1 + str2;

    //vector<int> pi = getPartialMatch(str);
    vector<int> ans = getPrefixSuffix(str);
    sort(ans.begin(), ans.end());   //오름차순 정렬
    //cout << "[" << str << "]" <<endl;
/*
    for(int i=0 ; i<pi.size() ; i++){
        printf("%c ", str[i]);
    }
    cout << endl;
*/


    for(int i=0 ; i<ans.size() ; i++){
        printf("%d ", (int)ans[i]);
    }
    cout << endl;
    
    return 0;
}
