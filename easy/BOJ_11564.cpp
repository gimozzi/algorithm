#include <cstdio>


int main (void) {

    long long k, a, b, cnt = 0;
    scanf("%lld %lld %lld", &k, &a, &b);
/*
    // 5 4 11 인 경우 안됨
    cnt = (b-a)/k;
    if( (b%k == 0) || (a%k == 0) )
        cnt++;
*/
    cnt = b/k - a/k;
    if( (b%k == 0) || (a%k == 0) || (a<0 && 0<b) )
        cnt++;
    
    printf("%lld\n", cnt);
    
    return 0;
}
