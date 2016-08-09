#include <iostream>

using namespace std;


int main (void) {

    int freq[100] = {0, };
    int sum = 0, max_freq = 0, max_freq_idx = -1;
    int in;

    for(int i=0 ; i<10 ; i++){
        cin >> in;
        sum += in;
        freq[in/10]++;
    }
    for(int i=1 ; i<100 ; i++){
        if(freq[i] > max_freq){
            max_freq_idx = i;
            max_freq = freq[i];
        }
    }

    cout << (int)sum/10 << endl;
    cout << max_freq_idx * 10 << endl;

    return 0;
}
