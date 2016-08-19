#include <cstdio>
#include <cstring>


int main (void) {

    while(1){
        char bit[40];
        scanf("%s", bit);

        if(bit[0] == '#')
            break;

        int num_of_one = 0;
        int len = strlen(bit);
        for(int i=0 ; i<len - 1 ; i++){
            if(bit[i] == '1')
                num_of_one++;
            printf("%c", bit[i]);
        }

        if(bit[len-1] == 'e'){
            if(num_of_one % 2 == 0)
                printf("0\n");
            else
                printf("1\n");
        }
        else if(bit[len-1] == 'o'){
            if(num_of_one % 2 == 0)
                printf("1\n");
            else
                printf("0\n");
        }         

    }

    return 0;
}
