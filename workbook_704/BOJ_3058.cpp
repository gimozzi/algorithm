#include <iostream>

using namespace std;


int main (void) {

    int T;
    cin >> T;
    while(T--){
        int input[7];
        int sum = 0, min = 111;

        for(int i=0 ; i<7 ; i++){
            cin >> input[i];
            if(input[i] % 2 == 0){
                sum += input[i];
                if(input[i] < min)
                    min = input[i];
            }
        }
        cout << sum << " " << min << endl;
    
    }

    return 0;
}
