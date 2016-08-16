#include <cstdio>

int main (void) {

    int T;
    scanf("%d", &T);
    while(T--){
        //float price;
        double price;
        scanf("%lf", &price);
        printf("$%.2f\n", price * 0.8);
    }

    return 0;
}
