#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main (void) {

    int N, MONEY = 0;;
    cin >> N;
    while(N--){
        vector<int> v(3);
        for(int i=0 ; i<3 ; i++)
            cin >> v[i];

        sort(v.begin(), v.end(), greater<int>());
        int repeat = 1, money = 0;
        if(v[0] == v[1]) repeat++;
        if(v[1] == v[2]) repeat++;

        switch(repeat){
            case 1:
                money = v[0] * 100;
                break;
            case 2:
                money = 1000 + v[1] * 100;
                break;        
            case 3:
                money = 10000 + v[1] * 1000;
                break;
        }
        if(money > MONEY)
            MONEY = money;
    }
    cout << MONEY << endl;

    return 0;
}
