#include <iostream>
#include <string>

using namespace std;


int main (void) {

    while(1){
        string str;
        getline(cin, str);
        
        if(str == "#")
            break;

        int Quicksum = 0;
        for(int i=0 ; i<str.size() ; i++){
            if(str[i] != ' ')
                Quicksum += (str[i] - 'A' + 1) * (i+1);
        }

        cout << Quicksum << "\n";

    }
    return 0;
}
