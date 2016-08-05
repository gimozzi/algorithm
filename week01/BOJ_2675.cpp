#include <iostream>
#include <string>

using namespace std;


int main (void) {

    int T;

    cin >> T;
    while(T--){
        int R;
        string input, output = "";
        cin >> R >> input;

        for(int i=0 ; i<input.size() ; i++){
            for(int j=0 ; j<R ; j++){
                output += input[i];
            }
        }
        
        cout << output << endl;
        
    }

    return 0;
}
