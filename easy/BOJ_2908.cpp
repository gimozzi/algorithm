#include <iostream>
#include <string>
#include <algorithm>    //reverse

using namespace std;


int main (void) {

    string str1, str2;
    cin >> str1 >> str2;

    // reverse string
    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());

    // string to int    
    //int a = stoi(str1);   // c++11
    //int b = stoi(str2);   // c++11
    int a = atoi(str1.c_str());
    int b = atoi(str2.c_str());

    // ternary operator
    //cout << a > b ? a : b;
    int out = a > b ? a : b;
    cout << out;

    return 0;
}
