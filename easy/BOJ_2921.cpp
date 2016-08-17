#include <cstdio>

int main (void) {
    int N, sum = 0;
    scanf("%d", &N);
    
    for(int i=0 ; i<=N ; i++)
        for(int j=0 ; j<=i ; j++)
            sum += (i+j);

    printf("%d", sum);
    return 0;
}
