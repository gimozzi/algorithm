#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>

using namespace std;


int main (void) {

    int N, group = 0;
    cin >> N;
    while(N--){
//        string str;
//        cin >> str;
        char str[101];
        scanf("%s", str);
        int alphabet[26];
        for(int i=0 ; i<26 ; i++)
            alphabet[i] = 1;

        char check = '0';
        bool group_check = true;
        for(int i=0 ; i<strlen(str) ; i++){
            if((check >= 'a' && check <= 'z')){
                if(check == str[i]){
                    continue;
                }
                else{
                    if(alphabet[str[i] -'a'] == 0){
                        group_check = false;
                        break;
                    }
                }
            }
            if(alphabet[str[i] - 'a'] == 1){
                check = str[i];
                alphabet[str[i] - 'a']--;
            }


        }
        if(group_check)
            group++;
    }
    cout << group << endl;

    return 0;
}
