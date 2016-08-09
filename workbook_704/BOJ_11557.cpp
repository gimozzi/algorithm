#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct data {
    string univ;
    int alcohol;
};

bool comp (struct data a, struct data b){
    return a.alcohol > b.alcohol;
}

int main (void) {

    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;

//        vector<struct data> v(N);
        struct data v[N];

        for(int i=0 ; i<N ; i++)
            cin >> v[i].univ >> v[i].alcohol;

        sort(v, v+N, comp);

        cout << v[0].univ << endl;
        
    }

    return 0;
}
