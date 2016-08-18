#include <iostream>
#include <string>

using namespace std;


int main (void) {

    string str, cambridge = "CAMBRIDGE";
    int alphabet[26] = {0, };
    for(int i=0 ; i<cambridge.size() ; i++)
        alphabet[cambridge[i] - 'A']++;
    
    cin >> str;
    for(int i=0 ; i<str.size() ; i++){
        if(alphabet[str[i] - 'A'] == 0)
            cout << str[i];
    }
    return 0;
}
