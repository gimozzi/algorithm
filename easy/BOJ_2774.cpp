#include <iostream>
#include <string>

using namespace std;


int main (void) {

    int T;
    cin >> T;
    while(T--){
        string str;
        cin >> str;
        int digit[10] = {0, };
        int beauty = 0;

        for(int i=0 ; i<str.size() ; i++)
            digit[str[i] - '0']++;
        for(int i=0 ; i<10 ; i++){
            if(digit[i] > 0)
                beauty++;
        }
        cout << beauty << "\n";
        
    }

    return 0;
}
