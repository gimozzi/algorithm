#include <iostream>
#include <string>

using namespace std;


int main (void) {

    int N, M;
    cin >> N >> M;
    while(N--){
        string str;
        cin >> str;
        for(int i=M-1 ; i>=0 ; i--)
            cout << str[i];
        cout << endl;
    }
    return 0;
}
