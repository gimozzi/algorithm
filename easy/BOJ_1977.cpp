#include <iostream>
#include <cmath>        //sqrt
#include <vector>

using namespace std;


int main (void) {

    int M, N;
    cin >> M >> N;
    vector<int> v;

    double M_sqrt = sqrt(M), N_sqrt = sqrt(N);
    int i;
    if( fabs(M_sqrt - (int)M_sqrt) > 0)
        i = (int)M_sqrt + 1;
    else if( fabs(M_sqrt - (int)M_sqrt) == 0)
        i = (int)M_sqrt;

    for( ; i<=(int)N_sqrt ; i++){
        v.push_back(i*i);
    }

    if(v.size() == 0)
        cout << -1;
    else{
        int sum = 0;
        for(int i=0 ; i<v.size() ; i++){
            sum += v[i];
            //cout << v[i] << endl;
        }
        cout << sum << endl;
        cout << v[0] << endl;
    }
        

    return 0;
}
