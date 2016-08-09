#include <iostream>
#include <vector>

using namespace std;


int main (void) {

    int K;
    cin >> K;

    vector<int> v(K, -1);
    unsigned long long int sum = 0;

    for(int i=0, j=0 ; i<K ; i++){
        cin >> v[j];
        if(v[j] == 0){
            v[j--] = -1;
            v[j] = -1;
        }
        else
            j++;        
    }
    for(int i=0 ; i<K ; i++){
        if(v[i] == -1)
            break;
        sum += v[i];
    }

    cout << sum << endl;

    return 0;
}
