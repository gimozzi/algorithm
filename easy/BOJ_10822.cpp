#include <cstdio>
#include <cstdlib>      // atoi
#include <cstring>      // strtok

int main (void) {
    char S[101];
    char *token;
    scanf("%s", S);
    
    token = strtok(S, ",");
    int sum = 0;
    sum += atoi(token);
    while(1){
        token = strtok(NULL, ",");
        if(token == NULL)
            break;
        sum += atoi(token);
    }
    printf("%d", sum);

    return 0;
}
