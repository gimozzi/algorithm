#include <iostream>
#include <algorithm>    //sort
#include <vector>

using namespace std;


int main (void) {

    vector<int> A(4);
    vector<int> B(2);

    for(int i=0 ; i<4 ; i++)
        cin >> A[i];
    for(int i=0 ; i<2 ; i++)
        cin >> B[i];
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    int sum = 0;

    for(int i=1 ; i<4 ; i++)
        sum += A[i];
    sum += B[1];

    cout << sum << endl;
        
    return 0;
}
