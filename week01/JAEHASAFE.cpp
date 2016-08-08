#include <iostream>
#include <string>
#include <vector>

using namespace std;
/*
 * circular shift(환형 시프트)
 *
 * shift -> search 로 바꿔서 풀면 좀 더 간단해짐.
 *
 * S -> S2 로 확장하여 검색
 *
 * shift(a,b) 가 시계방향이면
 * shift(b,a) 는 반시계방향
 */

vector<int> getPartialMatch (const string& N) {

    int n = N.size();
    int begin = 1, matched = 0;
    vector<int> pi(n, 0);

    while(begin + matched < n){
        if(N[begin + matched] == N[matched]){
            ++matched;
            pi[begin + matched -1] = matched;
        }
        else{
            if(matched == 0)
                ++begin;
            else{
                begin += matched - pi[matched -1];
                matched = pi[matched - 1];    
            }
        }
    }
    return pi;
}

vector<int> kmpSearch (const string& H, const string& N) {

    int m = H.size(), n = N.size();
    int begin = 0, matched = 0;
    vector<int> ret;
    vector<int> pi = getPartialMatch(N);

    while(begin <= m - n){
        if(matched < n && H[begin + matched] == N[matched]){
            ++matched;
            if(matched == n)
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

int shifts (const string& original, const string& target) {
    return kmpSearch(original + original, target)[0];
}

int main (void) {

    int C;
    cin >> C;
    while(C--){
        int output = 0;

        int N;
        cin >> N;

//        vector<string> v;
//        v.reserve(N+1);

        string original, target;
        cin >> original;
        for(int i=0 ; i<N ; i++){
            cin >> target;
            int cw, ccw;

            cw = shifts(original, target);
            ccw = shifts(target, original);
            if(cw <= ccw && cw > 0)
                output += (cw);
            else if( cw > ccw && ccw >0)
                output += (ccw);
            
            original = target;
        }

 /*
        for(int i=0 ; i<N ; i++)
            output += shifts(v[i], v[i+1]);
*/
        cout << output << endl;
    }

    return 0;
}
