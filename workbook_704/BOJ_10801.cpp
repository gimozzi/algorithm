#include <iostream>
#include <vector>

using namespace std;


int main (void) {
    
    vector<int> A(10);
    vector<int> B(10);
    
    int A_win = 0, B_win = 0;

    for(int i=0 ; i<10 ; i++)
        cin >> A[i];
    for(int i=0 ; i<10 ; i++)
        cin >> B[i];

    for(int i=0 ; i<10 ; i++){
        if(A[i] > B[i])
            A_win++;
        else if(A[i] < B[i])
            B_win++;
        else
            continue;
    }
    
    if(A_win > B_win)
        cout << "A" << endl;
    else if(A_win < B_win)
        cout << "B" << endl;
    else
        cout << "D" << endl;

    return 0;
}
