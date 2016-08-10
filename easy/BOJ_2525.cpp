#include <cstdio>

int main (void) {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    A += C/60;
    B += C%60;
    A += B/60;
    A %= 24;
    B %= 60;
    printf("%d %d", A, B);
    return 0;
}
