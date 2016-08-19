#include <iostream>
#include <cstdio>
#include <cstdlib>      // atoi
#include <cstring>      // strtok
#include <string>
#include <vector>

using namespace std;


int main (void) {
//    char S[10001];
    string str = "";

    char strin[10001];
    //scanf("%s", strin);
    while( gets(strin) ){
        if(strin == NULL)
            break;
        string in = strin;
        str += in;            
    }
   
    vector<char> writable(str.begin(), str.end());
    writable.push_back('\0');
    char *S = &writable[0]; 

    char *token;    
    token = strtok(S, ",");
    int sum = 0;
    sum += atoi(token);
    while(1){
        token = strtok(NULL, ",");
        if(token == NULL)
            break;
        sum += atoi(token);
    }
    printf("%d", sum);

    return 0;
}
