#include <cstdio>


int main (void) {

    int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int m, d, date = 0, crit = 31 + 18;

    scanf("%d %d", &m, &d);
    for(int i=0 ; i<m-1 ; i++)
        date += month[i];
    date += d;

    if(date == crit)
        printf("Special");
    else if(date < crit)
        printf("Before");
    else
        printf("After");    

    return 0;
}
