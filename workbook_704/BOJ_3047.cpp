#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main (void) {

    vector<int> num(3);
    for(int i=0 ; i<3 ; i++)
        cin >> num[i];
    
    char ABC[3];
    for(int i=0 ; i<3 ; i++)
        cin >> ABC[i];
    
    int order[3];
    for(int i=0 ; i<3 ; i++){
        order[i] = ABC[i] - 'A';
    }

    sort(num.begin(), num.end());   //오름차순 정렬

    for(int i=0 ; i<3 ; i++)
        cout << num[order[i]]<< " ";


    return 0;
}
