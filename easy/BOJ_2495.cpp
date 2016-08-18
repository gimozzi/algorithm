#include <iostream>
#include <string>

using namespace std;


int main (void) {

    int T = 3;
    while(T--){
        string str;
        cin >> str;
        int max = 1, dup = 1;
        for(int i=1 ; i<str.size() ; i++){
            if(str[i] == str[i-1]){
                dup++;
                if(dup > max)
                    max = dup;
            }
            else
                dup = 1;
        }
        cout << max << endl;
    }

    return 0;
}
