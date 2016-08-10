#include <iostream>
#include <string>

using namespace std;


int main (void) {

    string str1, str2;
    cin >> str1 >> str2;

    if(str1.size() >= str2.size())
        cout << "go";
    else
        cout << "no";

    return 0;
}
