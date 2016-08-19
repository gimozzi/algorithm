#include <iostream>
#include <string>

using namespace std;


int main (void) {

    while(1){
        string str;
//        cin >> str;       //입력에 공백이 포함되어있음
        getline(cin, str);
        if(str == "*")
            break;

        int alphabet[26] = {0, };
        bool pangram = true;
        for(int i=0 ; i<str.size() ; i++){
            alphabet[str[i] - 'a']++;
            if(alphabet[str[i] - 'a'] > 1){
                pangram = false;
                break;
            }
        }
        if(pangram)
            cout << "Y" << endl;
        else
            cout << "N" << endl;
    }

    return 0;
}
