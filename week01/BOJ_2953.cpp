#include <iostream>

using namespace std;


int main (void) {

    int participant[5] = {0, };
    int winner = 0;

    int input;
    for(int i=0 ; i<5 ; i++){
        for(int j=0 ; j<4 ;j++){
            cin >> input;
            participant[i] += input;
        }
    }
    for(int i=0 ; i<5 ; i++){
        if(participant[i] > participant[winner])
            winner = i;
    }
    cout << winner+1 << " " << participant[winner] << endl;

    return 0;
}
