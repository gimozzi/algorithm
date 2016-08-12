#include <iostream>

using namespace std;


int main (void) {

    int N;
    cin >> N;
    
    int sum = 0;

    for(int i=0, a=0 ; i<N ; i++){
        int in;
        cin >> in;
        if(in == 0)
            a = 0;
        else
            a++;

        sum += a;        
    }

    cout << sum;


    return 0;
}
