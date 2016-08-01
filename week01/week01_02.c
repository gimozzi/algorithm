#include <stdio.h>
#include <string.h>


int main (void) {

    char input[129];
    char *p;
    char output[512];
    int i = 1;

//    scanf("%s", input);   // 공백잇으면 안됨: There is no cow level 에서
//                          //                  There 만 입력받음
    gets(input);    //acm 에서는 stdio 써야되는데 어띃하죠...
    strcpy(output, "");

    p = strtok(input, " ");
    if( p ) strcat(output, p);
    printf("%d\n", i++);
//    while( p != NULL ){
    while(p = strtok(NULL, " ")){
//        p = strtok(NULL, " ");
        printf("%d[%s]\n", i++, p);
        if( p ){
            strcat(output, "%20");
            strcat(output, p);
        }
    }
    printf("%s\n", output);

    return 0;
}
