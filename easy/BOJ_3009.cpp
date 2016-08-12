#include <iostream>

using namespace std;


int main (void) {

    int x, y;
    int x_ = 0, y_ = 0;
    for(int i=0 ; i<3 ; i++){
        cin >> x >> y;
        //초기값 0 인 변수와 ^=(XOR) 하니까
        //중복된 값 아닌 결과가 남게 되겠죠
        x_ ^= x;
        y_ ^= y;
    }

    cout << x_ << " " << y_;


    return 0;
}
