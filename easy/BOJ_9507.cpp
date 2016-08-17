#include <cstdio>


int main (void) {

    int t;
    scanf("%d", &t);
    unsigned long long fibo[70] = {1, 1, 2, 4, 0, };
    
    for(int i=4 ; i<70 ; i++){
        fibo[i] = fibo[i-1] + fibo[i-2] + fibo[i-3] + fibo[i-4];
    }

    while(t--){
        int n;
        scanf("%d", &n);
        printf("%llu\n", fibo[n]);
    }

    return 0;
}
