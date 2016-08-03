#include <iostream>

using namespace std;


int main (void) {

    int T = 0;

    cin >> T;
    while(T--){
        int W = 0;
        int A = 0;

        cin >> W;
        for(int i=0 ; i<9 ; i++){
            cin >> A;
            W -= A;
        }
        
        if(W >= 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }

    return 0;
}

