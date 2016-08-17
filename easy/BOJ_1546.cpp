#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main (void) {

    int N;
    scanf("%d", &N);

    vector<int> v(N);
    for(int i=0 ; i<N ; i++)
        cin >> v[i];
    
    sort(v.begin(), v.end(), greater<int>());
    //greater 가 iostream 에 있나요?

    double sum = 0;

    for(int i=0 ; i<N ; i++){
        sum += (double)v[i]/v[0]*100;
        //printf("%.2f]\n", (double)v[i]/v[0]*100);
    }

    printf("%.2lf\n", sum/N);   
    
    return 0;
}
