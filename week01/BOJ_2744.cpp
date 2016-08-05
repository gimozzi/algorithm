#include <iostream>
#include <string>

using namespace std;


int main (void) {

    string input, output = "";

    cin >> input;
    for(int i=0 ; i<input.size() ; i++){
        if(input[i] <= 'Z')
            output += (char)('a' + input[i] - 'A');
        else
            output += (char)('A' + input[i] - 'a');
    }
    cout << output << endl;

    return 0;
}
