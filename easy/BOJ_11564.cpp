#include <cstdio>


int main (void) {

    long long k, a, b, i, cnt = 0;
    scanf("%lld %lld %lld", &k, &a, &b);

    cnt = (b-a)/k;
    if( (b%k == 0) || (a%k == 0) )
        cnt++;
    printf("%lld\n", cnt);
    
    return 0;
}
