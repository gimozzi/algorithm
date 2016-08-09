#include <iostream>

using namespace std;

int main (void) {

    int T;
    cin >> T;
    while(T--){
        int K = 0, Y = 0;
        int Yin, Kin;
        for(int i=0 ; i<9 ; i++){
            cin >> Yin >> Kin;
            Y += Yin;
            K += Kin;
        }
        if(Y > K)
            cout << "Yonsei" << endl;
        else if(Y == K)
            cout << "Draw" << endl;
        else
            cout << "Korea" << endl;
    }

    return 0;
}
