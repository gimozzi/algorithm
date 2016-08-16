#include <cstdio>

/*
 * N!/10^M 이 정수인 가장 큰 M을 구하기
 * N! 의 factor 중 2의 개수는 항상 5의 개수보다 많음
 * 따라서 5의 개수를 구하면 10^M 의 최대 크기를 알 수 있음
 */

int main (void) {

    int N, cnt = 1;
    while(1){
        scanf("%d", &N);
        if(N == 0)
            break;

        int M = 0;
        int n = 5;
        while(n <= N){
            int factor = n;
            while(1){
                if(factor % 5 != 0)
                    break;
                factor /= 5;
                M++;
            }
            n += 5;
        }

        printf("Case #%d: %d\n", cnt++, M);
    }

    return 0;
}
