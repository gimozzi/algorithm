#include <iostream>
#include <vector>
#include <algorithm>        //sort
using namespace std;


int main (void) {

    int N;
    cin >> N;

    vector<int> v(N);
    int prime = 0;

    for(int i=0 ; i<N ; i++){
        cin >> v[i];    
    }

    sort(v.begin(), v.end());

    for(int i=0 ; i<N ; i++){
        bool flag = true;
        for(int j=0 ; j<=i ; j++){
            if(v[i] == 1)
                flag = false;
            if(v[i] % v[j] == 0 && v[j] != 1 && v[i] != v[j])
                flag = false;
        }
        if(flag)
            prime++;
    }

    cout << prime << endl;

    return 0;
}
