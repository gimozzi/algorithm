#include <iostream>

using namespace std;


int main (void) {

    int A, B, C;
    cin >> A >> B >> C;

    int out[10] = {0, };
    int mul = A * B * C;

    while(1){
        if(mul == 0)
            break;
        out[mul % 10]++;
        mul /= 10;
    }

    for(int i=0 ; i<10 ; i++)
        cout << out[i] << endl;
 

    return 0;
}
