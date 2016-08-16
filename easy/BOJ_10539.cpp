#include <iostream>
#include <vector>

using namespace std;


int main (void) {

    int N;
    cin >> N;

    vector<int> v(N);
    for(int i=0 ; i<N ; i++)
        cin >> v[i];
    
    long long l = 0;
    for(int i=0 ; i<N ; i++){
        cout << v[i] * (i+1) - l << " ";
        l += v[i] * (i+1) - l;
    }


    return 0;
}
