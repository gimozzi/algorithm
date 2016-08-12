#include <iostream>

using namespace std;


int main (void) {

    while(1){
        int a, b;
        cin >> a >> b;
        if(a == 0 && b == 0)
            break;

        if((a < b) && (b % a == 0))
            cout << "factor" << endl;
        else if((a > b) && (a % b == 0))
            cout << "multiple" << endl;
        else
            cout << "neither" << endl;

    }

    return 0;
}
