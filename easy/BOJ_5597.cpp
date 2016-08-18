#include <iostream>

using namespace std;


int main (void) {

    int student[31] ={0, };
    for(int i=0 ; i<28 ; i++){
        int in;
        cin >> in;
        student[in]++;
    }

    for(int i=1 ; i<=30 ; i++){
        if(student[i] == 0)
            cout << i << endl;
    }

    return 0;
}
