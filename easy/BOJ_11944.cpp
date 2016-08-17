#include <iostream>
#include <string>
#include <cstdlib>      //atoi

using namespace std;


int main (void) {

    string str;
    int N, M;
    cin >> str >> M;
    N = atoi(str.c_str());
    int len = 0;

    for(int n=0 ; n<N ; n++){
        for(int i=0 ; i<str.size() ; i++){
            if(len >= M)
                break;
            cout << str[i];
            len++;
        }
        if(len >= M)
            break;

    }

    return 0;
}
