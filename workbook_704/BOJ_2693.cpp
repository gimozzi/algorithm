#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main (void) {

    int T;
    cin >> T;
    while(T--){
        vector<int> A(10);
        
        for(int i=0 ; i<10 ; i++)
            cin >> A[i];

        //sort(A.end(), A.begin());
        sort(A.begin(), A.end());

        cout << A[7] << endl;   //3 번째 큰 수
        
    }

    return 0;
}
