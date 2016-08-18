#include <iostream>
#include <string>

using namespace std;


int main (void) {
 
    int acc = 0;
    string str, fbi = "FBI";
    for(int i=1 ; i<=5 ; i++){
        cin >> str;
        bool agent = false;
        if(str.size() >= 3){
            for(int j=0 ; j<str.size()-2 ; j++){
                int cnt = 0;
                for(int k=0 ; k<3 ; k++){
                    if(str[j+k] == fbi[k])
                        cnt++;
                }
                if(cnt == 3){
                    agent = true;
                    acc++;
                    break;
                }
            }
            if(agent)
                cout << i << " ";
        }
    }
    if(acc == 0)
        cout << "HE GOT AWAY!";

    return 0;
}
