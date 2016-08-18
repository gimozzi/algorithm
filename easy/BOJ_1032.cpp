#include <iostream>
#include <string>

using namespace std;


int main (void) {

    int N;
    cin >> N;
    string pat;

    for(int k=0 ; k<N ; k++){
        string str;
        cin >> str;
        if(k==0){
            pat = str;
            //pat.resize(str.size());
        }
        else{
            for(int i=0 ; i<pat.size() ; i++){
                if(pat[i] != str[i])
                    pat[i] = '?';
            }
        }
    }

    cout << pat;


    return 0;
}
