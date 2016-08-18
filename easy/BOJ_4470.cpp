#include <iostream>
#include <string>

using namespace std;


int main (void) {

    int N;
    cin >> N;
    cin.ignore();   //써줘야 다음에 getline에서 error 안남
    for(int i=1 ; i<=N ; i++){
        string str;
        getline(cin, str);
        cout << i << ". " << str << "\n";
    }


    return 0;
}
