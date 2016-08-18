#include <cstdio>


int main (void) {

    int T;
    scanf("%d", &T);
    while(T--){
        int a, b;
        scanf("%d %d", &a, &b);

        // Euclidean algorithm 적용 위해 a > b 인 상태로 바꿔줌
        if( b > a ){
            int tmp = a;
            a = b;
            b = tmp;
        }
        
        int A = a, B = b;

        int r;
        while(1){
            if(a % b == 0)
                break;
            r = a%b;
            a = b;
            b = r;
        }
        printf("%d %d\n", (A/b) * (B/b) * b, b);
    }
    return 0;
}
