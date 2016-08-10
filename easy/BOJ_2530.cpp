#include <cstdio>

int main (void) {

    int A, B, C, D;
    scanf("%d %d %d %d", &A, &B, &C, &D);
    A += D/3600;
    B += (D%3600)/60;
    C += D%60;

    B += C/60;
    A += B/60;

    A %= 24;
    B %= 60;
    C %= 60;

    printf("%d %d %d", A, B, C);


    return 0;
}
