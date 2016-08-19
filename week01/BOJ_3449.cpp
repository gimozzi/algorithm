#include <iostream>
#include <string>
#include <cstdio>

using namespace std;


int main (void) {

    int T;
    cin >> T;
    while(T--){
        string str1, str2;
        cin >> str1 >> str2;
        
        int dist = 0;
        for(int i=0 ; i<str1.size() ; i++)
            dist += str1[i]^str2[i];

        printf("Hamming distance is %d.\n", dist);
    }

    return 0;
}
