#include <iostream>
#include <string>

using namespace std;


int main (void) {

    int T;
    
    cin >> T;
    while(T--){
        string input, output = "";
        
        cin >> input;
        output += input[0];
        output += input[input.size() - 1];

        cout << output << endl;
        
    }

    return 0;
}
