#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;


int main (void) {

    int N;
    cin >> N;

    //vector<int> v(N);     //이렇게 하면 안되요...
    vector<unsigned long long> v(N);
    for(int i=0 ; i<N ; i++)
        cin >> v[i];
    
    unsigned long long l = 0;
    for(int i=0 ; i<N ; i++){
//        cout << (unsigned long long)(v[i] * (i+1) - l) << " ";
        printf("%llu ", (unsigned long long)(v[i] * (i+1) -l));
        l += (unsigned long long)(v[i] * (i+1) - l);
    }


    return 0;
}
