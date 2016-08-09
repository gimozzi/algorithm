#include <iostream>

using namespace std;


int main (void) {

    int N;
    cin >> N;
    int plug = 1, in;
    while(N--){
        cin >> in;
        plug -= 1;
        plug += in;
    }
    cout << plug << endl;

    return 0;
}
