#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main (void) {

    int T = 0;
    // (1, 1) ~ (1000, 1000)
    // 좌표평면에서 비스듬하게 그려진 직사각형은 생각하지 않는 부분?
    // -> 직사각형의 네 변은 뷰포트의 두 축에 평행함이 조건임
    vector<int> x;
    vector<int> y;

    x.reserve(3);
    y.reserve(3);

    cin >> T;

    for(int i = 0  ; i < T ; i++){
        
        x.clear();
        y.clear();

        for(int j = 0 ; j < 3 ; j++){
            int input_x, input_y;
            cin >> input_x >> input_y;
            x.push_back(input_x);
            y.push_back(input_y);
        }

        for(int j = 1 ; j < 3 ; j++){
            if(x[0] == x[j])
                x[0] = -1, x[j] = -1;
            if(y[0] == y[j])
                y[0] = -1, y[j] = -1;
        }

        //첫번째 element가 -1 이면 내림차순 정렬 수행
        if(x[0] == -1)
            sort(x.begin(), x.end(), greater<int>());
        if(y[0] == -1)
            sort(y.begin(), y.end(), greater<int>());
            

        cout << x[0] << " " << y[0] << endl;      
    }

    return 0;
}

