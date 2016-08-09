#include <iostream>
#include <string>

using namespace std;


int main (void) {

    int T;
    cin >> T;
    while(T--){
        string str;
        cin >> str;

//        int score[str.size()] = {0, };    //이렇게는 안됩니다...
        int score[str.size()];
        for(int i=0 ; i<str.size() ; i++)
            score[i] = 0;

        for(int i=0 ; i<str.size() ; i++){
            if(i == 0){
                if(str[i] == 'O')
                    score[i] = 1;
            }
            else{
                if(str[i] == 'O')
                    score[i] = score[i-1] + 1;
            }
        }

        int sum = 0;
        for(int i=0 ; i<str.size() ; i++)
            sum += score[i];

        cout << sum << endl;
    }

    return 0;
}
