#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int main (void) {

    int N;
    cin >> N;
    while(N--){
        string str, lower;
        cin >> str;
        lower.resize(str.size());
        transform(str.begin(), str.end(), lower.begin(), ::tolower);
        cout << lower << endl;
    }

    return 0;
}
