#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main (void) {

    int W = 0, K = 0;
    vector<int> W_score(10), K_score(10);

    for(int i=0 ; i<10 ; i++)
        cin >> W_score[i];
    for(int i=0 ; i<10 ; i++)
        cin >> K_score[i];

    sort(W_score.begin(), W_score.end());
    sort(K_score.begin(), K_score.end());

    for(int i=7 ; i<10 ; i++){
        W += W_score[i];
        K += K_score[i];
    }

    cout << W << " " << K << endl;


    return 0;
}
