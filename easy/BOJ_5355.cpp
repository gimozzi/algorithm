#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;


int main (void) {

    int T;
    cin >> T;
    cin.ignore();
    while(T--){
        char str[10001];
//        cin >> str;
        //cin >> str;
        cin.getline(str, 10000);
//        getchar();
//        scanf("%[^\n]s", str);
        char* tok = strtok(str, " ");
        float num = atof(tok);
        //cout << num << endl;
        while(1){
            tok = strtok(NULL, " ");
            if(tok == NULL)
                break;

            if(*tok == '@')
                num *= 3;
            else if(*tok == '%')
                num += 5;
            else if(*tok == '#')
                num -= 7;       
        }
        printf("%.2f\n", num);
    }

    return 0;
}
