#include <iostream>

using namespace std;


int main (void) {

    int N, remainder = 0;
    cin >> N;
    while(N--){
        int student, apple;
        cin >> student >> apple;
        remainder += (apple % student);
    }
    cout << remainder << endl;

    return 0;
}
