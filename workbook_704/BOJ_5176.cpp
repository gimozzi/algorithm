#include <iostream>
#include <vector>

using namespace std;


int main (void) {

    int K;
    cin >> K;
    while(K--){
        int P, M;
        cin >> P >> M;
    
        vector<int> seat(M+1, 0);
        int output = 0, input;
        
        for(int i=0 ; i<P ; i++){
            cin >> input;
            if(seat[input] == 0)
                seat[input]++;
            else
                output++;
        }

        cout << output << endl;
    }

    return 0;
}
