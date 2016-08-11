#include <cstdio>

int main (void) {
    
    int H, M;
    scanf("%d %d", &H, &M);
    int min = 24 * 60;
    min += 60 * H + M;
    min -= 45;
    min %= 24*60;
    printf("%d %d", min/60, min%60);

    return 0;
}
