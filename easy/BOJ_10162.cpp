#include <cstdio>

/* 
 * 5m(300s), 1m(60s) 10s 이므로
 * greedy 로 풀 수 있음
 */
int main (void) {

    int T;
    scanf("%d", &T);
    int A, B, C;

    A = T/300;
    T %= 300;
    B = T/60;
    T %= 60;
    C = T/10;
    T %= 10;
    if(T)
        printf("-1");
    else
        printf("%d %d %d", A, B, C);

    return 0;
}
