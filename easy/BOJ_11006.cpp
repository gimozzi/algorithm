#include <cstdio>


int main (void) {

    int T;
    scanf("%d", &T);
    while(T--){
        int N, M;
        scanf("%d %d", &N, &M);
        printf("%d %d\n", 2*M - N, M - (2*M-N));
    }

    return 0;
}
