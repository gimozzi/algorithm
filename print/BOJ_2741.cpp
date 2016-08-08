#include <iostream>

using namespace std;


int main (void) {

    int N;
    cin >> N;
    for(int i=0 ; i<N ; i++)
        cout << i+1 << "\n";    //endl 은 버퍼 flush 때문에 반복하면 느림
    return 0;
}
