#include <stdio.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

int main (void){
    
    int ascii[128] = {0, };
    int flag = TRUE;
    char input[128];
    int i;

    scanf("%s", input);
    for(i=0 ; i<strlen(input) ; i++){
        ascii[input[i]]++;
        if(ascii[input[i]] > 1){
            flag = FALSE;
            break;
        }
    }

    if( flag )
        printf("It has unique characters\n");
    else
        printf("It doesn't have unique characters\n");

    return 0;
}

