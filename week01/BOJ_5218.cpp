#include <iostream>
#include <string>
#include <vector>
//#include <cmath>        //abs

using namespace std;


int main (void) {

    int T;
    cin >> T;
    while(T--){
        string str1, str2;
        cin >> str1 >> str2;
        vector<int> dist(str1.size(), 0);
        
        for(int i=0 ; i<dist.size() ; i++){
            //dist[i] = abs(str1[i] - str2[i]);
            if(str2[i] >= str1[i])
                dist[i] = str2[i] - str1[i];
            else
                dist[i] = str2[i] + 26 - str1[i];
        }

        cout << "Distances:";
        for(int i=0 ; i<dist.size() ; i++)
            cout << " " <<dist[i];
        cout << endl;
    }

    return 0;
}
