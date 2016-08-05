#include <iostream>
#include <vector>

using namespace std;


int main (void) {

    int output = 0;
    vector<int> mod(42, 0);
    for(int i=0 ; i<10 ; i++){
        int input;
        cin >> input;
        mod[input % 42]++;
    }
    for(int i=0 ; i<42 ; i++){
        if(mod[i] != 0)
            output++;
    }
    cout << output << endl;

    return 0;
}
