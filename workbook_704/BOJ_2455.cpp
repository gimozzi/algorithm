#include <iostream>

using namespace std;

int main (void) {

    int passenger = 0;
    int max = 0;
    int out, in;

    for(int i=0 ; i<4 ; i++){
        cin >> out >> in;
        passenger -= out;
        passenger += in;
        if(passenger > max)
            max = passenger;
    }
    
    cout << max << endl;

    return 0;
}
