#include <iostream>
#include <string>

using namespace std;

int main (void) {

    string str;
    cin >> str;
    int num=1;

    for(int i=0 ; i<str.size() ; i++){
        if(str[i] == ',')
            num++;
    }


    cout << num << endl;
    return 0;
}
