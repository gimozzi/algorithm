#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;


struct dataset {
    int num;
    int index;
};

bool comp (struct dataset a, struct dataset b) {
    return a.num > b.num;
}

int main (void) {

//    int alphabet[26] = {0, };

    struct dataset alphabet[26];
    for(int i=0 ; i<26 ; i++){
        alphabet[i].num = 0;
        alphabet[i].index = i;
    }

    char sentence[5001];

    while(gets(sentence)){
        for(int i=0 ; i<strlen(sentence) ; i++){
            if(sentence[i] != ' ')
                alphabet[sentence[i] - 'a'].num++;
        }
    }

/*
    int max = -1, max_index = -1;;
    for(int i=0 ; i<26 ; i++){
        if(alphabet[i] > max){
            max = alphabet[i];
            max_index = i;
        }
    }
    printf("%c\n", (char)(max_index + 'a'));
*/
    sort(alphabet, alphabet + 26, comp);
    int max = alphabet[0].num, max_index = 0;
    string str = "";
    for(int i=0 ; i<26 ; i++){
        if(alphabet[i].num == max){
            max_index = i;
            str += (char)(alphabet[i].index + 'a');
        }
    }

    sort(str.begin(), str.end());
    cout << str << endl;


    return 0;
}
