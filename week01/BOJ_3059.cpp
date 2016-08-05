#include <iostream>
#include <string>

using namespace std;


int main (void) {

    int T;

    cin >> T;
    while(T--){
        int output = 0;
        int alphabet[26] = {0, };
        string input;
        
        cin >> input;
        for(int i=0 ; i<input.size() ; i++){
            alphabet[input[i] - 'A']++;
        }
        for(int i=0 ; i<26 ; i++){
            if(alphabet[i] == 0)
                output += (i+'A');
        }
        
        cout << output << endl;

    }

    return 0;
}
