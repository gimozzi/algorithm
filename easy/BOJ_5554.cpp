#include <cstdio>


int main (void) {

    int a[4], sum = 0;
    for(int i=0 ; i<4 ; i++){
        scanf("%d", &a[i]);
        sum += a[i];
    }

    printf("%d\n%d\n", sum/60, sum%60);



    return 0;
}
