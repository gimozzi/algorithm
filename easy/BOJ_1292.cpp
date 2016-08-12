#include <cstdio>

int main (void) {

    int A, B;
    scanf("%d %d", &A, &B);

    int seq[1001] = {0, };

    int num=1, idx=1;
    while(idx <= 1000){
        for(int i=0 ; i<num ; i++){
            seq[idx++] = num;
//            printf("%d\n", seq[idx-1]);
            if(idx > 1000)
                break;
        }
        num++;
    }


    int sum = 0;
    for(int i = A ; i<=B ; i++)
        sum += seq[i];

    printf("%d", sum);
    return 0;
}
