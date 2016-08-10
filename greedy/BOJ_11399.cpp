#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main (void){

    int N;
    cin >> N;
    vector<int> P(N);

    for(int i=0 ; i<N ; i++)
        cin >> P[i];

    sort(P.begin(), P.end());   //오름차순 정렬
    //int time[N] = {0, };      
    //variable-sized object may not be initialized...ㅠㅠ

    vector<int> time(N, 0);
    int sum = 0;

    for(int i=1 ; i<N ; i++)
        time[i] = time[i-1] + P[i-1];
    
    for(int i=0 ; i<N ; i++)
        sum += P[i] + time[i];

    cout << sum << endl;

    return 0;
}
