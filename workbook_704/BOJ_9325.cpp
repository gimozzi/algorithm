#include <iostream>
#include <vector>

using namespace std;


int main (void) {

    int T;
    cin >> T;
    while(T--){
        int s;
        cin >> s;
        int n;
        cin >> n;
        
        vector<int> q(n);
        vector<int> p(n);

        for(int i=0 ; i<n ; i++){
            cin >> q[i] >> p[i];
            s += q[i] * p[i];
        }

        cout << s << endl;
    }

    return 0;
}
