#include <iostream>
#include <cstdio>
#include <cstdlib>      // atoi
#include <cstring>      // strtok

using namespace std;


int main (void) {
    int T;
    cin >> T;
    cin.ignore();       //cin 사용후 getline 사용하려면 ignore 해줘야됨
    while(T--){
        char S[10001];
        char *token;
        //    scanf("%s", S);   //공백때문에 안된다!
        cin.getline(S, 10000);  

        token = strtok(S, " ");
        int sum = 0;
        sum += atoi(token);
        while(1){
            token = strtok(NULL, " ");
            if(token == NULL)
                break;
            sum += atoi(token);
        }
        printf("%d\n", sum);

    }
    return 0;
}
