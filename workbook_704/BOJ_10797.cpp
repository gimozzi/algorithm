#include <iostream>

using namespace std;


int main (void) {

    int N;
    cin >> N;
    int comp, output = 0;
    for(int i=0 ; i<5 ; i++){
        cin >> comp;
        if(comp == N)
            output++;
    }
    cout << output << endl;

    return 0;
}
