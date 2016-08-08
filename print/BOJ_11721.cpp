#include <iostream>
#include <string>

using namespace std;


int main (void) {

    string str;
    cin >> str;
    int len = str.size();
    
    for(int i=0 ; i<len ; i++){
        cout << str[i];
        if((i+1)%10 == 0)
            cout << endl;
    }

    return 0;
}
