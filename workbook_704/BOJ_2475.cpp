#include <iostream>

using namespace std;


int main (void) {

    int input[5];
    int sum = 0;
    for(int i=0 ; i<5 ; i++){
        cin >> input[i];
        sum += input[i] * input[i];
    }
    
    cout << sum % 10 << endl;

    return 0;
}
