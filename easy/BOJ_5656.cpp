#include <iostream>
#include <string>

using namespace std;


int main (void) {

    int a, b, num = 1, op_sw;
    string op, result;
    string op_set[6] = {">", ">=", "<", "<=", "==", "!="};
    
    while(1){
        cin >> a >> op >> b;
        if(op == "E")
            break;

        for(int i=0 ; i<6 ; i++){
            if(op == op_set[i])
                op_sw = i;
        }

        //swift 라면 string 을 switch에 바로 쓰겠지만 c++은 그런거 전혀 없어
        switch(op_sw){
        case 0:
            result = (a > b) ? "true" : "false";
            break;
        case 1:
            result = (a >= b) ? "true" : "false";
            break;
        case 2:
            result = (a < b) ? "true" : "false";
            break;
        case 3:
            result = (a <= b) ? "true" : "false";
            break;
        case 4:
            result = (a == b) ? "true" : "false";
            break;
        case 5:
            result = (a != b) ? "true" : "false";
            break;
        default:
            cout << "그런거 전혀 없어" << endl;
            break;
        }

        // 입력이 최대 12000줄 이기 때문에 endl 대신 "\n" 사용 (N찍기)
        cout << "Case " << num++ << ": " << result << "\n";
    }

    return 0;
}
