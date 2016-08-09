#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>      //stringstream

using namespace std;

/*
bool cmp (const string& a, const string& b){
    return a > b;
}
*/

string intToString (int n) {
    stringstream s;
    s << n;
    return s.str();
}

int main (void) {

    int N;
    cin >> N;

//    string str = to_string(N);
    string str = intToString(N);
/*
 * C++11 이전 version은 to_string 사용시 error 발생
 * stringstream 사용하여 intToString 과 같은 함수 만들어서 사용
 */

    int len = str.size();
//    sort(str, str + len, cmp);
    sort(str.begin(), str.end());
//어똥하면 sort 잘 할 수 있어요??


    for(int i=str.size()-1 ; i>=0 ; i--)
        cout << str[i];
    
    //cout << str <<  endl;

    return 0;
}
