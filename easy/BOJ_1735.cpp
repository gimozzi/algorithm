#include <cstdio>


int main (void) {

    int numerator[2], denominator[2];
    for(int i=0 ; i<2 ; i++)
        scanf("%d %d", &numerator[i], &denominator[i]);
    
    int A, B, A_, B_;
    A_ = A = (numerator[0] * denominator[1]) + (numerator[1] * denominator[0]);
    B_ = B = denominator[0] * denominator[1];
    
    bool improper;
    //Euclidean 사용하기 위해 항상 B > A 인 상태로 만들어줌 
    improper = A > B ? true : false;
    if(improper){
        int tmp = A;
        A = B;
        B = tmp;
    }
    
    //Euclidean algorithm
    while(1){
        if(B % A == 0){
            if(A == 1){
                //서로소
            }
            else{
                A_ /= A;
                B_ /= A;
            }
            break;
        }
        int r = B % A;
        B = A;
        A = r;
    }

    printf("%d %d", A_, B_);  

    return 0;
}
