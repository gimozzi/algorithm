#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> getPartialMatch (const string& N){

    int n = N.size();
    vector<int> pi(n, 0);
    int begin = 1, matched = 0;

    while(begin + matched < n){
        if(N[begin + matched] == N[matched]){
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


vector<int> KMP (const string& H, const string& N) {

    int n = H.size(), m = N.size();
    vector<int> pi = getPartialMatch(N);
    int begin = 0, matched = 0;
    vector<int> ret;

    while(begin <= (n-m)){
        if(matched < m && H[begin + matched] == N[matched]){
            ++matched;
            if(matched == m)
                ret.push_back(begin);
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

    return ret;
}

int main (void) {

    string H, N;
    cin >> H >> N;

    vector<int> pos = KMP(H, N);


    cout << pos.size() << endl;

    return 0;
}
