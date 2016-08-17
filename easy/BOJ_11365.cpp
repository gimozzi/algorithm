#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int main (void) {

    while(1){
        string str;
        //cin >> str;
        getline(cin, str);
        if(str == "END")
            break;

        reverse(str.begin(), str.end());
        cout << str << endl;
    }
    return 0;
}
