#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct dataset{
    int price;
    string name;
};

bool comp (struct dataset a, struct dataset b) {
    return a.price > b.price;
}

int main (void) {

    int T;
    cin >> T;
    while(T--){
        int P;
        cin >> P;
        
        struct dataset data[P];

        for(int i=0 ; i<P ; i++){
            cin >> data[i].price;
            cin >> data[i].name;
        }

        sort(data, data + P, comp);

        cout << data[0].name << endl;
    }   

    return 0;
}
