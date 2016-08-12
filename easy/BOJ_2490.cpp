#include <iostream>

using namespace std;


int main (void) {

    char out[6] = "EABCD";
    for(int k=0 ; k<3 ; k++){
        int u=0;
        for(int i=0 ; i<4 ; i++){
            int in;
            cin >> in;
            if(in == 0)
                u++;
        }
        cout << out[u] << endl;        
    }
    return 0;
}
