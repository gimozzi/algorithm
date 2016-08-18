#include <iostream>
#include <string>

using namespace std;


int main (void) {

    int N;
    cin >> N;

    string bit1, bit2;
    cin >> bit1 >> bit2;
    int bit[bit1.size()];

    bool deletion = true;
    for(int i=0 ; i<bit1.size() ; i++){
        bit[i] = (int)((bit1[i] -'0')^(bit2[i] - '0'));
    }

 /*
    for(int i=0 ; i<bit1.size() ; i++)
        cout << bit[i];
    cout << endl;
*/
    if(N%2 == 0){
        for(int i=0 ; i<bit1.size() ; i++){
            if(bit[i] != 0){
                deletion = false;
                break;
            }
        }
    }
    else{
        for(int i=0 ; i<bit1.size() ; i++){
            if(bit[i] != 1){
                deletion = false;
                break;
            }
        }

    }

    if(deletion)
        cout << "Deletion succeeded" << endl;
    else
        cout << "Deletion failed" << endl;

    return 0;
}
