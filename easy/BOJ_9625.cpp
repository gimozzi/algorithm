#include <cstdio>

//fibonacci ??

int main (void) {

    int K;
    scanf("%d", &K);
    
    unsigned long long A[46] = {1, 0, };
    unsigned long long B[46] = {0, 1, 0, };
    
    for(int i=2 ; i<46 ; i++){
        A[i] = A[i-1] + A[i-2];
        B[i] = B[i-1] + B[i-2];
    }

    printf("%llu %llu\n", A[K], B[K]);

    return 0;
}
