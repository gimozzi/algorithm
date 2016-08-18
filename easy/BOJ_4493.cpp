#include <iostream>

using namespace std;


int main (void) {

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int P1 = 0, P2 = 0;

        while(n--){
            char p1, p2;
            cin >> p1 >> p2;
            if(p1 != p2){
                if(p1 == 'R') P1 += (p1 > p2) ? -1 : 1;
                else if(p1 == 'P') P1 += (p2 > 'R') ? -1 : 1;
                else if(p1 == 'S') P1 += (p2 > 'P') ? -1 : 1;
            }
        }

        if(P1 > P2)
            cout << "Player 1" << endl;
        else if(P2 > P1)
            cout << "Player 2" << endl;
        else
            cout << "TIE" << endl;
    }

    return 0;
}
