#include <iostream>
#include <string>

using namespace std;


int main (void) {

    string str;
    bool b = true;
    cin >> str;
    for(int i=0 ; i<str.size()/2 ; i++){
        if(str[i] != str[str.size() -1 - i]){
            b = false;
            break;
        }
    }
    if(b)
        cout << 1;
    else
        cout << 0;

    return 0;
}
