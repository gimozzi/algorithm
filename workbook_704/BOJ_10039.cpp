#include <iostream>

using namespace std;

int main (void) {

    int score[5] = {0, };
    int sum = 0;

    for(int i=0 ; i<5 ; i++){
        cin >> score[i];
        if(score[i] < 40)
            score[i] = 40;
        sum += score[i];
    }
//    printf("%d\n", sum/5);
    cout << sum/5 << endl;

    return 0;
}
