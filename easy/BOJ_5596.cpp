#include <cstdio>

int main (void) {
    int a[4], S=0, T=0;
    for(int i=0 ; i<4 ; i++){
        scanf("%d", &a[i]);
        S += a[i];
    }
    for(int i=0 ; i<4 ; i++){
        scanf("%d", &a[i]);
        T += a[i];
    }
    if(S >= T)
        printf("%d", S);
    else
        printf("%d", T);

    return 0;
}
