#include <iostream> 
#include <string>
#include <vector>

using namespace std;


vector<int> getPartialMatch(const string& N){

    int m = N.size();
    vector<int> pi(m, 0);

    int begin = 1, matched = 0;
    //begin 이 1인 것은 prefix, suffix 비교를 위해서...

    while(begin + matched < m){
        if(N[begin + matched] == N[matched]){
            ++matched;
            pi[begin + matched -1] = matched;
        }
        else{
            if(matched == 0)
                ++begin;
            else{
                begin += matched - pi[matched-1];
                matched = pi[matched-1];
            }
        }
    }

    return pi;    
}

vector<int> kmp(const string& H, const string& N){

    int n = H.size();
    int m = N.size();

    vector<int> ret;
    
    vector<int> pi;
    pi = getPartialMatch(N);

    int begin = 0, matched = 0;

    while(begin <= n - m){
        if(matched < m && H[begin + matched] == N[matched]){
            ++matched;
            if(matched == m)
                ret.push_back(begin+1); //두번째 출력은 index 1부터 시작
        }
        else{
            if(matched == 0)
                ++begin;
            else{
                begin += matched - pi[matched-1];
                matched = pi[matched-1];
            }
        }
    }    

    return ret;    
}

int main (void) {

    string T;
    string P;
    
    vector<int> matched;

    //getline 사용하여야 공백 포함된 문자열 입력 가능
    getline(cin, T);
    getline(cin, P);

    matched = kmp(T, P);

    cout << (int)matched.size() << endl;
    for(int i=0 ; i<matched.size() ; i++)
        cout << matched[i] << " ";
    cout << endl;

    return 0;
}
