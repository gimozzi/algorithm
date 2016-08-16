#include <cstdio>

int main (void) {
    
    int sum = 0, a[5];
    for(int i=0 ; i<5 ; i++){
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("%d", sum);

    return 0;
}
