#include <cstdio>

int main (void) {

    int T;
    scanf("%d", &T);
    while(T--){
        int a, b;
        scanf("%d %d", &a, &b);
        int A = a, B = b;   //원래 수
        //Euclidean algorithm 적용하기 위해 a > b 로 만들어쥼
        if(b > a){
            int temp = a;
            a = b;
            b = temp;
        }

        while(1){
            if(a % b == 0)
                break;
            int r;
            r = a % b;
            a = b;
            b = r;
        }

        printf("%d\n", (A/b) * (B/b) * b);
    }

    return 0;
}


