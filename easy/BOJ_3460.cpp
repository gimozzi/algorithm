#include <iostream>
#include <vector>

using namespace std;


int main (void) {
    
    int T;
    cin >> T;
    while(T--){
        int n, i=0;
        cin >> n;

        vector<int> v;
        while(1){
            if(n == 1){
                v.push_back(i);
                break;
            }
            
            if(n%2 == 1)
                v.push_back(i);
             
            n /= 2;            
            i++;
        }
        for(int i=0 ; i<v.size() ; i++)
            cout << v[i] << " ";
        cout << endl;
    }

    return 0;
}
