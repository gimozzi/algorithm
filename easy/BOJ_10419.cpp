#include <cstdio>


int main (void) {

    int T;
    scanf("%d", &T);
    while(T--){
        int d;
        scanf("%d", &d);
        int t = 0;
        while(1){
            ++t;
            if(t + t*t > d){
                --t;
                break;
            }
        }       
        printf("%d\n", t);
    }

    return 0;
}
