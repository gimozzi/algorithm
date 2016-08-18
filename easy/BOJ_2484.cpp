#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main (void) {

    int N, MONEY = 0;
    cin >> N;
    while(N--){
        vector<int> v(4);
        for(int i=0 ; i<4 ; i++)
            cin >> v[i];

        sort(v.begin(), v.end(), greater<int>()); //내림차순 정렬

        int repeat = 1, money = 0, case2;

        for(int i=0 ; i<3 ; i++){
            if(v[i] == v[i+1]){
                repeat++;
                case2 = v[i];
            }
        }

        switch(repeat) {
            case 1:
                money = v[0] * 100;
                break;
            case 2:
                money = 1000 + case2 * 100;
                break;
            case 3:
                if(v[1] != v[2])
                    money = 2000 + v[1] * 500 + v[2] * 500;                 
                else
                    money = 10000 + v[1] * 1000;                
                break;
            case 4:
                money = 50000 + v[0] * 5000;
                break;
        }

        if(money > MONEY)
            MONEY = money;
    }
    cout << MONEY << endl;
    

    return 0;
}
