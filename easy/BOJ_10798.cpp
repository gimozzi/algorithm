#include <iostream>
#include <string>
#include <vector>
#include <cstdio>

using namespace std;


int main (void) {

    vector<string> v;

    int maxlen = -1;
    for(int i=0 ; i<5 ; i++){
        string elem;
        cin >> elem;
//        printf("elemsize: %d, maxlen: %d\n", elem.size(), maxlen);
//        ~.size() : long unsigned int 라서 type 맞춰줘야 되는 듯...
        if((int)elem.size() > maxlen)
            maxlen = (int)elem.size();
        v.push_back(elem);
    }

    string str = "";
    
//    cout << endl << v[0][0] << endl<< maxlen << endl<< v[0].size()<< endl;

//    for(int i=0 ; i<5 ; i++) cout << v[i] << endl;

    for(int i=0 ; i<maxlen ; i++){
        for(int j=0 ; j<5 ; j++){
            if(v[j].size() <= maxlen){
                str += v[j][i];
            }
        }
    }

    cout << str << endl;
    return 0;
}
