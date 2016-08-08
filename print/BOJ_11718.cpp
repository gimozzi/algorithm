#include <iostream>
#include <string>

using namespace std;


int main (void) {
    
    string str;
    while(getline(cin, str)){
        //while(getline(cin, str) != NULL)
        //getline 은 더 이상 입력이 없을 때(EOF를 만났을 때)
        //NULL 을 return 함
        cout << str << endl;
    }   

    return 0;
}
