#include <iostream>
#include <vector>

using namespace std;


int main (void) {
    
    int N;
    cin >> N;
    vector<int> v(N);
    int find, output = 0;

    for(int i=0 ; i<N ; i++)
        cin >> v[i];
    
    cin >> find;

    for(int i=0 ; i<N ; i++){
        if(v[i] == find)
            output++;
    }

    cout << output << endl;


    return 0;
}
