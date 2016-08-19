#include <cstdio>
#include <cstring>
#include <cstdlib>


int main (void) {

    int N;
    scanf("%d", &N);
    while(N--){
        char question[100];
        scanf("%s", question);
        if(question[0] == 'P'){
            printf("skipped\n");
        }
        else{
            char *token = strtok(question, "+");
            char *token2 = strtok(NULL, "+");
            int num1 = atoi(token);
            int num2 = atoi(token2);
            printf("%d\n", num1 + num2);
        }

    }
    return 0;
}
