#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main (void) {

    int T;
    cin >> T;
    while(T--){
        vector<int> v(5);
        
        for(int i=0 ; i<5 ; i++)
            cin >> v[i];

        sort(v.begin(), v.end());

        if(v[3] - v[1] >= 4)
            cout << "KIN" << endl;
        else{
            int sum = 0;
            for(int i=1 ; i<=3 ; i++)
                sum += v[i];
            cout << sum << endl;
        }
    }

    return 0;
}
