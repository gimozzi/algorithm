#include <iostream>
#include <string>
#include <cstdio>

using namespace std;


int main (void) {

    int CASE = 1;
    while(1){
        string str1, str2;
        cin >> str1 >> str2;

        if(str1 == "END" && str2 == "END")
            break;

        int alphabet1[26] = {0, };
        int alphabet2[26] = {0, };

        for(int i=0 ; i<str1.size() ; i++)
            alphabet1[str1[i] - 'a']++;
        for(int i=0 ; i<str2.size() ; i++)
            alphabet2[str2[i] - 'a']++;

        bool same = true;
        for(int i=0 ; i<26 ; i++){
            if(alphabet1[i] != alphabet2[i]){
                same = false;
                break;
            }
        }

        if(same)
            printf("Case %d: same\n", CASE);
        else
            printf("Case %d: different\n", CASE);
        CASE++;
    }
    return 0;
}
