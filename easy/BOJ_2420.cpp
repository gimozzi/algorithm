#include <iostream>
#include <cstdlib>      //llabs

using namespace std;


int main (void) {

    long long N, M;
    cin >> N >> M;
    cout << llabs(N-M);    

    return 0;
}
