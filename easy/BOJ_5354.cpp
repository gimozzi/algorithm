#include <iostream>

using namespace std;


int main (void) {

    int T;
    cin >> T;
    while(T--){
        int J;
        cin >> J;

        for(int i=0 ; i<J ; i++){
            for(int j=0 ; j<J ; j++){
                if(i==0 || i==J-1 || j==0 || j==J-1)
                    cout << '#';
                else
                    cout << 'J';
            }
            cout << endl;
        }
    }

    return 0;
}
