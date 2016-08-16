#include <cstdio>

int main (void) {

    int V;
    scanf("%d ", &V);   //공백있어야 AAABBB 입력시 Tie 나옴
    int A = 0, B = 0;
    while(V--){
        char in;
        scanf("%c", &in);
        if(in == 'A')
            A++;
        else if(in == 'B')
            B++;
    }
    if( A > B )
        printf("A");
    else if( B > A)
        printf("B");
    else
        printf("Tie");

    return 0;
}
