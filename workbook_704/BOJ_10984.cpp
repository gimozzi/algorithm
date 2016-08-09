#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;


int main (void) {

    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;

        vector<int> C(N);
        vector<float> G(N);
        float GPA = 0;
        int total_C = 0;

        for(int i=0 ; i<N ; i++){
            cin >> C[i] >> G[i];
            total_C += C[i];
            GPA += C[i] * G[i];
        }
        
        printf("%d %.1f\n", total_C, GPA/total_C);
    }

    return 0;
}
