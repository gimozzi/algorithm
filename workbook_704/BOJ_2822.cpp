#include <iostream>
#include <algorithm>

struct question{
    int score;
    int index;
};

// overloading 안되나?? 
bool comp1 (struct question a, struct question b) {
    return a.score > b.score;   //내림차순이얌
}
bool comp2 (int a, int b){
    return a < b;               //오름차순이얌
}

using namespace std;


int main (void) {

    struct question q[8];

    for(int i=0 ; i<8 ;i++){
        cin >> q[i].score;
        q[i].index = i+1;
    }

    sort(q, q+8, comp1);
    
    int sum = 0;
    int order[5];
    for(int i=0 ; i< 5 ; i++){
        sum += q[i].score;
        order[i] = q[i].index;
    }
    
    sort(order, order+5 ,comp2);

    cout << sum << endl;
    for(int i=0 ; i<5 ; i++)
        cout << order[i] << " ";


    return 0;
}
