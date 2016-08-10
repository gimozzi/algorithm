#include <iostream>

using namespace std;


int main (void) {

    int input[7];
    int sum = 0, min = 111, count = 0;

    for(int i=0 ; i<7 ; i++){
        cin >> input[i];
        if(input[i] % 2 == 1){
            count++;
            sum += input[i];
            if(input[i] < min)
                min = input[i];
        }
    }
    if(count){
        cout << sum << endl;
        cout << min << endl;
    }
    else
        cout << -1 << endl;

    return 0;
}
