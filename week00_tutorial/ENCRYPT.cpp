#include <iostream>

using namespace std;


int main (void) {
    
    int T = 0;
    string input;
    string output;


    cin >> T;
    while(T--){
        output.clear();
        cin >> input;
        if(input.length() == 1){
            cout << input << endl;
        }
        else{
            for(int i=0 ; i<input.length()/2 ; i++)
                output += input[i*2];   //output.append(input[i*2];
            for(int i=0 ; i<input.length()/2 ; i++)
                output += input[(i*2) + 1];   
            cout << output << endl;
        }
    }

    return 0;
}
