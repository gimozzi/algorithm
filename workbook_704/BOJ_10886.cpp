#include <iostream>

using namespace std;


int main (void) {

    int N;
    int cute[2] = {0. };
    cin >> N;
    for(int i=0 ; i<N ; i++){
        int in;
        cin >> in;
        cute[in]++;
    }

    if(cute[0] > cute[1])
        cout << "Junhee is not cute!" << endl;
    else
        cout << "Junhee is cute!" << endl;


    return 0;
}
