#include <iostream>
#include <string>
#include <vector>
#include <algorithm>        //reverse

using namespace std;

vector<int> getPartialMatch (const string& str) {
    
    int n = str.size();
    vector<int> pi(n, 0);
    
    int begin = 1, matched = 0;

    while(begin + matched < n){
        if(str[begin + matched] == str[matched]){
            ++matched;
            pi[begin + matched - 1] = matched;
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

int maxOverlap (const string& str1, const string& str2) {

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

    string str;
    string reverse_str;
    cin >> str;
    reverse_str = str;
    reverse(reverse_str.begin(), reverse_str.end());

    int min_len = maxOverlap(str, reverse_str); 

    cout << min_len + 2*(str.size() - min_len) << endl;

    return 0;
}
