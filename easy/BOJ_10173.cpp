#include <iostream>
#include <string>
#include <algorithm>    //transform

using namespace std;


int main (void) {

    while(1){
        string in, lower;
        getline(cin, in);
        
        if(in == "EOI")
            break;

        //입력받은 string을 lower case 로 바꿔줍니다
        lower.resize(in.size());
        transform(in.begin(), in.end(), lower.begin(), ::tolower);
//        cout << in << endl;
//        cout << lower << endl;

        // 한 줄에 80자 이내이므로 find 사용
        if(lower.find("nemo") != string::npos)
            cout << "Found" << endl;
        else
            cout << "Missing" << endl;
    }

    return 0;
}
