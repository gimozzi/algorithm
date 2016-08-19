#include <cstdio>


int main (void) {

    while(1){
        long long a, b;
        scanf("%lld %lld", &a, &b);
        
        if(a == 0 && b == 0)
            break;

        printf("%lld %lld / %lld\n", (long long)a/b, (long long)a%b, b);
    }
    return 0;
}
