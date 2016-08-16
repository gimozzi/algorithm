#include <cstdio>


int main (void) {

    int a[5];
    for(int i=0 ; i<5 ; i++)
        scanf("%d", &a[i]);

    int X, Y;
    X = a[0] * a[4];
    if(a[4] > a[2])
        Y = a[1] + (a[4]-a[2])*a[3];
    else
        Y = a[1];

    if(X <= Y)
        printf("%d", X);
    else
        printf("%d", Y);
    return 0;
}
