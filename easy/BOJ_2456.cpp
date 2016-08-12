#include <iostream>
#include <algorithm>

using namespace std;

struct P {
    int vote;
    int index;
    int vote3;
    int vote2;
};

bool comp (struct P a, struct P b){
    return a.vote > b.vote;
}   


int main (void) {

    int N;
    cin >> N;

    struct P P[3];
    for(int i=0 ; i<3 ; i++){
        P[i].vote = 0;
        P[i].index = i+1;
        P[i].vote3 = 0; //큰 점수 후보가 여러명일 때 3점 더 많이 받은 후보가 회장
        P[i].vote2 = 0; //3점으로 결정 안나면 2점으로...
    }

    while(N--){
        for(int i=0 ; i<3 ; i++){
            int in;
            cin >> in;
            P[i].vote += in;
            if(in == 3)
                P[i].vote3++;
            if(in == 2)
                P[i].vote2++;
        }            
    }

    sort(P, P+3, comp);
    /*
    for(int i=0 ; i<3 ; i++)
        cout << P[i].vote <<endl;
        */
    if(P[0].vote == P[1].vote){
        if(P[0].vote3 > P[1].vote3)
            cout << P[0].index << " " << P[0].vote;   
        else if(P[0].vote3 < P[1].vote3)
            cout << P[1].index << " " << P[1].vote;
        else if(P[0].vote3 == P[1].vote3){
            if(P[0].vote2 > P[1].vote2)
                cout << P[0].index << " " << P[0].vote;   
            else if(P[0].vote2 < P[1].vote2)
                cout << P[1].index << " " << P[1].vote;
            else 
                cout << "0 " << P[0].vote;
        }
        else
            cout << "0 " << P[0].vote;
    }
    else
        cout << P[0].index << " " << P[0].vote;   


    return 0;
}
