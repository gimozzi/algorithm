#include <iostream>
#include <string>
#include <cstdlib>      //atoi
#include <sstream>      //stringstream
using namespace std;


int main (void) {

    int N;
    string str;
    cin >> N >> str;
    int sum = 0;
    for(int i=0 ; i<N ;i++){
        stringstream ss;
        ss << str[i];
        string tmp = ss.str();
        sum += atoi(tmp.c_str());
    }
    cout << sum << endl;
    return 0;
}
