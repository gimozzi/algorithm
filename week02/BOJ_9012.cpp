#include <iostream>
#include <string>

using namespace std;


int main (void) {

    int N;
    cin >> N;
    while(N--){
        string str;
        cin >> str;
        
        int top = 0;
        bool ans = true;
        for(int i=0 ; i<str.size() ; i++){
           if(str[i] == '(')
               top++;
           else{
               top--;
               if(top < 0){
                   ans = false;
                   break;            
               }
           }
        }
        if(top != 0)
            ans = false;

        if(ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }

    return 0;
}
