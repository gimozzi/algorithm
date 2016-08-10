#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main (void) {

    int N;
    cin >> N;

    vector<int> factor(N);
    for(int i=0 ; i<N ; i++)
        cin >> factor[i];

    sort(factor.begin(), factor.end());

    if(N < 2)
        cout << factor[N/2] * factor[N/2];
    else
        cout << factor[0] * factor[N-1];

    return 0;
}
