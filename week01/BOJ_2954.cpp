#include <iostream>
#include <string>

using namespace std;


int main (void) {

    string str;
    getline(cin, str);

    string vowel = "aeiou";
    int begin = 0;

    while(begin < str.size()){
        bool vowel_matched = false;
        for(int i=0 ; i<5 ; i++){
            if(str[begin] == vowel[i]){
                cout << vowel[i];
                begin += 3;
                vowel_matched = true;
                break;
            }
        }

        if(vowel_matched)
            continue;
        else
            cout << str[begin++];
    }

    cout << endl;

    return 0;
}
