#include <iostream>
#include <cstdio>

using namespace std;


int main (void) {

    int n;
    cin >> n;
    int Q[5] = {0. };

    while(n--){
        int x, y;
        cin >> x >> y;
        
        if(x == 0 || y == 0)    //axis
            Q[0]++;
        else if(x > 0 && y > 0) //Q1
            Q[1]++;
        else if(x < 0 && y > 0) //Q2
            Q[2]++;
        else if(x < 0 && y < 0) //Q3
            Q[3]++;
        else if(x > 0 && y < 0) //Q4
            Q[4]++;
    }
    for(int i=1 ; i<5 ; i++)
        printf("Q%d: %d\n", i, Q[i]);
    cout << "AXIS: " << Q[0] << endl;

    return 0;
}
