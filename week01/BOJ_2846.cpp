#include <iostream>
#include <vector>

using namespace std;

int main (void) {

    int N;
    cin >> N;
    vector<int> P;
    P.reserve(N);
    vector<int> asc(N, 0);   

    int output = 0;
    
    for(int i=0 ; i<N ; i++){
        cin >> P[i];
        if(i>0 && P[i] > P[i-1]){
            asc[i] = P[i] - P[i-1] + asc[i-1] ;
            if(asc[i] > output)
                output = asc[i];
        }
    }

    cout << output << endl;    

    return 0;
}
