#include <iostream>
#include <cstdio>
#include <cstdlib>      // atoi
#include <cstring>      // strtok

using namespace std;


int main (void) {
    char str[10001];
    cin.getline(str, 10000);
    /*
     * scanf 사용하면 공백때문에 하나 밖에 입력 안됨...
     * gets 나 getline 사용해야됨
     */

    char *token;
    
    token = strtok(str, " \t");
    int sum = 0;
    sum += atoi(token);
    while(1){
        token = strtok(NULL, " \t");
        if(token == NULL)
            break;
        sum += atoi(token);
    }
    printf("%d", sum);

    return 0;
}
