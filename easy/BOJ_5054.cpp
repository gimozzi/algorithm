#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main (void) {

    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0 ; i<n ; i++)
            cin >> v[i];

        sort(v.begin(), v.end());   //오름차순 정렬
        
        cout << (v[n-1] - v[0]) * 2 << endl;
    }

    return 0;
}
