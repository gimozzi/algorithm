#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>

using namespace std;


int main (void) {

    int K;
    cin >> K;

    for(int k = 1 ; k <= K ; k++){
        int N;
        cin >> N;

        vector<int> v(N);
        int gap = 0;

        for(int i=0 ; i<N ; i++){
            cin >> v[i];
        }

        sort(v.begin(), v.end());
        for(int i=1 ; i<N ; i++){
            if(v[i] - v[i-1] > gap)
                gap = v[i] - v[i-1];
        }

        printf("Class %d\n", k);        
        printf("Max %d, Min %d, Largest gap %d\n", v[N-1], v[0], gap);

    }
    

    return 0;
}
