#include <cstdio>
#include <cmath>

using namespace std;

int main (void) {

    int N;
    scanf("%d", &N);
    while(N--){
        char alphabet[4];
        int num;
        scanf("%3s-%d", alphabet, &num);

//        printf("[%s][%d]\n", alphabet, num);
        int alphabet_num = 0;
        for(int i=2, radix = 1 ; i>=0 ; i--, radix *= 26){
            alphabet_num += (int)((alphabet[i] - 'A') * radix);
        }

        if(abs(alphabet_num - num) <= 100)
            printf("nice\n");
        else
            printf("not nice\n");

    }

    return 0;
}
