#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

void reverse_print (char *token) {
    for(int i=strlen(token)-1 ; i>=0 ; i--)
        cout << token[i];     
    cout << " ";
}

int main (void) {

    int T;
    cin >> T;
    cin.ignore();   //cin 쓰고 getline 쓰려면 써줘야죠..
    while(T--){
        char str[1001];
        cin.getline(str, 1000);
        
        char *token = strtok(str, " ");
        if(token != NULL)            
            reverse_print(token);

        while(1){
            token = strtok(NULL, " ");
            if(token == NULL)
                break;
            reverse_print(token);
        }      
        cout << "\n";
    }

    return 0;
}
