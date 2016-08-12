#include <iostream>

using namespace std;


int main (void) {

    int T;
    cin >> T;
    while(T--){
        int A, B;
        cin >> A >> B;
        int A_ = A, B_ = B;
        
        if(B > A){
            int temp = A;
            A = B;
            B = temp;
        }

        //Euclidean algorithm (A>B 일때)
        while(1){
            if(A % B == 0)
                break;
            int r = A % B;
            A = B;
            B = r;
        }

        cout << (A_ / B) * (B_ / B) * B << endl;

    }

    return 0;
}
