#include <iostream>
#include <string>

using namespace std;


int main (void) {

    string str;
    //cin >> str;
    getline(cin, str);

    for(int i=0 ; i<str.size() ; i++){
        if(str[i] == ' ')
            cout << ' ';
        else if(str[i] >= 'A' && str[i] <= 'Z')
            cout << (char)(((str[i] + 13 - 'A') % (int)('Z'-'A'+1)) + 'A');
        else if(str[i] >= 'a' && str[i] <= 'z')
            cout << (char)(((str[i] + 13 - 'a') % (int)('z'-'a'+1)) + 'a');
        else if(str[i] >= '0' && str[i] <= '9')
            cout << str[i];
            //cout << (char)(((str[i] + 13 - '0') % (int)('9'-'0'+1)) + '0');

    }
    cout << endl;

    return 0;
}
