#include <cstdio>


int main (void) {

    int a[4];
    while(1){
        int exit = 4;
        for(int i=0 ; i<4 ; i++){
            scanf("%d", &a[i]);
            if(a[i] == 0)
                --exit;
        }

        if(!exit)
            break;

        printf("%d %d\n", a[2]-a[1], a[3]-a[0]);
    }

    return 0;
}
