#include <cstdio>
#include <cstring>

int main (void) {

    int alphabet[26] = {0, };

    char sentence[5001];

    while(gets(sentence)){
        for(int i=0 ; i<strlen(sentence) ; i++){
            if(sentence[i] != ' ')
                alphabet[sentence[i] - 'a']++;
        }
    }

    int max = -1, max_index = -1;;
    for(int i=0 ; i<26 ; i++){
        if(alphabet[i] > max){
            max = alphabet[i];
            max_index = i;
        }
    }
    printf("%c\n", (char)(max_index + 'a'));

    return 0;
}
