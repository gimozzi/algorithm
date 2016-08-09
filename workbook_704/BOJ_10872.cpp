#include <iostream>

using namespace std;


int main (void) {

    int N;
    unsigned int output = 1;
    cin >> N;
    output *= N;
    for(int i = 1 ; i<N ; i++)
        output *= i;

    cout << output << endl;

    return 0;
}
