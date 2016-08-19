#include <cstdio>


int main (void) {

    int N;
    scanf("%d", &N);
    
    char **mirror = new char*[N];
    for(int i=0 ; i<N ; i++)
        mirror[i] = new char[N+1];

    /*
    for(int i=0 ; i<N ; i++){
        for(int j=0 ; j<N ; j++){
            scanf("%c", &mirror[i][j]);
        }
        scanf("\n");
    }
    */
    for(int i=0 ; i<N ; i++)
        scanf("%s", mirror[i]);

    int K;
    scanf("%d", &K);

    switch(K){
        case 1:
            for(int i=0 ; i<N ; i++){
                for(int j=0 ; j<N ; j++){
                    printf("%c", mirror[i][j]);
                }
                printf("\n");
            }
            break;
        case 2:
            for(int i=0 ; i<N ; i++){
                for(int j=N-1 ; j>=0 ; j--){
                    printf("%c", mirror[i][j]);
                }
                printf("\n");
            }
            break;
        case 3:
            for(int i=N-1 ; i>=0 ; i--){
                for(int j=0 ; j<N ; j++){
                    printf("%c", mirror[i][j]);
                }
                printf("\n");
            }
            break;
    }

    return 0;
}
