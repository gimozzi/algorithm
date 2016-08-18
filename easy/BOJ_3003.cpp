#include <cstdio>


int main (void) {

    int piece[6] = {1, 1, 2, 2, 2, 8};
    int white;
    for(int i=0 ; i<6 ; i++){
        scanf("%d", &white);
        printf("%d ", piece[i] - white);
    }

    return 0;
}
