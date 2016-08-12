#include <iostream>
#include <string>

using namespace std;


int main (void) {

    string hex;
    cin >> hex;

    int dec = 0;
    
    for(int i=hex.size()-1, unit = 1; i>=0 ; i--, unit*=16){
        if(hex[i] >= '0' && hex[i] <= '9')
            dec += (hex[i] - '0') * unit;
        else
            dec += (10 + hex[i] - 'A') * unit;
    }

    cout << dec;
   

    return 0;
}
