#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>      // int to string 하기 위한 stringstream 사용

using namespace std;

string intToString (int n) {
    stringstream s;
    s << n;
    return s.str();
}

int main (void) {

    string str1, str2, str;
    cin >> str1 >> str2;
    int s1, s2, sum;
    
    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());

    s1 = atoi(str1.c_str());
    s2 = atoi(str2.c_str());

    sum = s1 + s2;
//    str = to_string(sum);     //c++11 이전 version은 버그있음
    str = intToString(sum);   
    reverse(str.begin(), str.end());
    //atoi 로 숫자로 바꿔서 출력 안하면 5, 543의 경우 053 이 출력됨
    cout << atoi(str.c_str()) << endl;


    return 0;
}
