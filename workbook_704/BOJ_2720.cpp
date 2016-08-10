//#include <iostream>
#include <cstdio>

using namespace std;


int main (void) {

    int T;
    scanf("%d", &T);
    while(T--){
        int C;
        scanf("%d", &C);
        // 1 달러 == 100 센트
        // Quater   $0.25   25
        // Dime     $0.10   10
        // Nickel   $0.05   5
        // Penny    $0.01   1
        int Q=0, D=0, N=0, P=0;
        Q = C / 25;
        C %= 25;
        D = C / 10;
        C %= 10;
        N = C / 5;
        C %= 5;
        P = C;

        printf("%d %d %d %d\n", Q, D, N, P);
    }

    return 0;
}
