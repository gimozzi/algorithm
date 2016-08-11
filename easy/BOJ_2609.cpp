#include <iostream>

using namespace std;

//Euclidean algorithm

int main (void) {

    int a, b;   //input
    cin >> a >> b;
    int A = a;
    int B = b;

    // a > b 를 전제로 함 
    if(b > a){
        int temp = a;
        a = b;
        b = temp;
    }

    while(1){
        if(a % b == 0){
            break;
        }
        int temp = a % b;
        a = b;
        b = temp;        
    }

    cout << b << endl;
    cout << (A/b) * (B/b) * b << endl;

    return 0;
}
