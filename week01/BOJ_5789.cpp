#include <cstdio>
#include <cstring>

int main (void) {
    
    int N;
    scanf("%d", &N);
    while(N--){
        char str[1001];
        scanf("%s", str);
        
        int len = strlen(str);
        
        if(str[len/2 -1] == str[len/2])
            printf("Do-it\n");
        else
            printf("Do-it-Not\n");       
    }

    return 0;
}
