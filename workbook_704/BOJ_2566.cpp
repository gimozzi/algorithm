#include <iostream>
#include <algorithm>

using namespace std;

struct dataset {

    int val;
    int x, y;
};

bool cmp (struct dataset a, struct dataset b){
    return a.val > b.val;
}

int main (void) {

    struct dataset data[9 * 9];

    for(int i=0 ; i<9 ; i++){
        for(int j=0 ; j<9 ; j++){
            cin >> data[i*9 + j].val;
            data[i*9 + j].x = i+1;
            data[i*9 + j].y = j+1;
        }
    }

    //sort(data.begin(), data.end(), cmp);  //struct에는 begin, end 사용못함
    sort(data, data+(9*9), cmp);      //begin, end 대신하는 코드

    cout << data[0].val << endl;
    cout << data[0].x << " " << data[0].y << endl; 

    return 0;
}

