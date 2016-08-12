#include <iostream>

using namespace std;


int main (void) {

    float price[5] = {350.34, 230.90, 190.55, 125.30, 180.90};
    int in[5];

    int T;
    cin >> T;
    while(T--){
        float sum = 0;
        for(int i=0 ; i<5 ; i++){
            cin >> in[i];
            sum += price[i] * in[i];
        }
        
        cout << fixed;    //소수점 고정
        //fixed 안하면 자연수 부분 부터 precision 하기 때문에
        //결과가 1.4e+04 처럼 e 로 표현됨
        cout.precision(2);  //소수점 큰자리수 부터
        cout << "$" << sum << endl;
    }


    return 0;
}
