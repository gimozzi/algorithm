#include <iostream>
#include <vector>

using namespace std;


int main (void) {

    int n;
    cin >> n;   // n >= 2 이겠죠?

    vector<unsigned int> v(n+1, 0);  //0 ~ n 번째 까지 있음

    if(n == 1)
        v[1] = 1;
    else if(n >= 2){
        v[1] = 1;
        for(int i= 2 ; i<= n ; i++){
            v[i] = v[i-1] + v[i-2];
        }
    }
    cout << v[n] << endl;

    return 0;
}
