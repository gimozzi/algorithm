#include <cstdio>


int main (void) {

    int N;
    scanf("%d", &N);

    int seat[101] = {0, };
    int reject = 0;
    for(int i=0 ; i<N ; i++){
        int in;
        scanf("%d", &in);
        if(seat[in]++ != 0)
            reject++;
    }

    printf("%d", reject);

    return 0;
}
