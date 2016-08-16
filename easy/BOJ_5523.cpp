#include <cstdio>

int main (void) {

    int N, A=0, B=0;
    scanf("%d", &N);
    for(int i=0 ; i<N ; i++){
        int A_in, B_in;
        scanf("%d %d", &A_in, &B_in);
        if(A_in > B_in)
            A++;
        else if(A_in < B_in)
            B++;
    }
    printf("%d %d", A, B);

    return 0;
}
