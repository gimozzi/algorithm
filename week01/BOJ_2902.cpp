#include <iostream>
#include <string>

using namespace std;


int main (void) {

    string input, output = "";
    cin >> input;

    for(int i=0 ; i<input.size() ; i++){
        if(i == 0)
            output += input[i];
        else if(i > 0 && input[i-1] == '-'){
            output += input[i];
        }
    }
    cout << output << endl;

    return 0;
}
