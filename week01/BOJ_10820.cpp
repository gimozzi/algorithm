#include <iostream>
#include <string>
//#include <cstdio>       //EOF 

using namespace std;


int main (void) {
    
    //int N;
    //cin >> N;
    //cin.ignore();
    string input;
//    while(1){
    while(getline(cin, input)){
        //getline(cin, input);
        //if(input == EOF)
        //if(cin.eof())
        //    break;
        int output[4] = {0, };
        int lower = 0, upper = 0, num = 0, space = 0;
        for(int i=0 ; i<input.size(); i++){
            if(input[i] >= 'a' && input[i] <= 'z')
                output[0]++;
            else if(input[i] >= 'A' && input[i] <= 'Z')
                output[1]++;
            else if(input[i] >= '0' && input[i] <= '9')
                output[2]++;
            else if(input[i] == ' ' || input[i] == '\t')
                output[3]++;
        }

        for(int i=0 ; i<4 ; i++)
            cout << output[i] << " ";
        cout << endl;

    }

    return 0;
}
