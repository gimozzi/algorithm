#include <iostream>
#include <algorithm>

using namespace std;

struct dataset {

    int val;
    int idx;
};

bool cmp (struct dataset a, struct dataset b){
    return a.val > b.val;
}

int main (void) {

    struct dataset data[9];

    for(int i=0 ; i<9 ; i++){
        cin >> data[i].val;
        data[i].idx = i+1;
    }

    //sort(data.begin(), data.end(), cmp);  //struct에는 begin, end 사용못함
    sort(data, data+9, cmp);      //begin, end 대신하는 코드

    cout << data[0].val << endl;
    cout << data[0].idx << endl; 

    return 0;
}

