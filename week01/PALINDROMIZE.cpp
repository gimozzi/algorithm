#include <iostream>
#include <string>
#include <algorithm>    //reverse
#include <vector>

using namespace std;


vector<int> getPartialMatch (const string& N){

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
                matched = pi[matched -1];
            }
        }
    }

    return pi;
}



int maxOverlap (const string& str1, const string& str2){

    int n = str1.size(), m = str2.size();
    vector<int> pi = getPartialMatch(str2);

    int begin = 0, matched = 0;

    while(begin < n){
        if(matched < m && str1[begin + matched] == str2[matched]){
            ++matched;
            if(begin + matched == n)
                return matched;
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

    return 0;
}


int main (void) {
    
    int C;

    cin >> C;
    while(C--){
        string S;
        string reverse_S;
        
        cin >> S;
        reverse_S = S;
        reverse(reverse_S.begin(), reverse_S.end());

        int ans = maxOverlap(S, reverse_S);
     
        cout << ans + 2*(S.size()-ans) << endl;
    }

    return 0;
}
