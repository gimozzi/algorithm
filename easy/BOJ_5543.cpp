#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main (void) {

    vector<int> bugger(3);
    vector<int> beverage(2);
    
    for(int i=0 ; i<3 ; i++)
        cin >> bugger[i];
    for(int i=0 ; i<2 ; i++)
        cin >> beverage[i];

    sort(bugger.begin(), bugger.end());
    sort(beverage.begin(), beverage.end());

    cout << bugger[0] + beverage[0] - 50;

    return 0;
}
