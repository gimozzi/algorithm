#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main (void) {

    int mid, sum = 0;
    vector<int> N(5);

    for(int i=0 ; i<5 ; i++){
        cin >> N[i];
        sum += N[i];
    }

    sort(N.begin(), N.end());

    cout << (int)sum/5 << endl;
    cout << N[2] << endl;
    

    return 0;
}
