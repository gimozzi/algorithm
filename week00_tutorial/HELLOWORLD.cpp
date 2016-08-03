#include <iostream>

using namespace std;


int main (void) {

    int C = 0;
    string input;

    cin >> C;

    for(int i = 0 ; i < C ; i++){
        cin >> input;
        cout << "Hello, " << input << "!" << endl;
    }
    return 0;
}

