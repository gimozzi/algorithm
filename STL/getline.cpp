#include <iostream>
#include <string>

using namespace std;


int main (void) {

    char cs[20];
    string str;

    cin.getline(cs, 20);
    cin.clear();
    /*
     * 만약 위의 cin.clear() 가 없다면 cs 크기인 20 이상의 문자열 입력시
     * cin 버퍼를 지우고 진행할 수 없어서
     * 아래의 str은 입력받을 수 없음
     *
     * cin.clear() 로 버퍼 지우고 아래 수행하면
     * cs가 다 입력받지 못한 뒤의 내용은 str로 입력됨
     */

    getline(cin, str);

    cout << "cs: " << cs << endl;
    cout << "str: " << str << endl;

    return 0;
}
