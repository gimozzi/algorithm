#include <iostream>

using namespace std;


int main (void) {
    
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        int sum = 0, in;
        for(int i=0 ; i<N ; i++){
            cin >> in;
            sum += in;
        }

        cout << sum << endl;
    }

    return 0;
}
