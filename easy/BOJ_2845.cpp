#include <cstdio>


int main (void) {

    int L, P;
    scanf("%d %d", &L, &P);
    int p[5];
    for(int i=0 ; i<5 ; i++)
        scanf("%d", &p[i]);

    for(int i=0 ; i<5 ; i++)
        printf("%d ", p[i] - L*P);


    return 0;
}
