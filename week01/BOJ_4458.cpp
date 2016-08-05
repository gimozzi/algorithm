#include <iostream>
#include <string>

using namespace std;


int main (void) {

    int N;

    cin >> N;
    cin.ignore();
    /*
     * rainflys.tistory.com/75
     * cin 입력 후 enter 시, 다음 get이나 getline은 개행문자를 저장하면서 오작동
     * cin 이나 get 이후에
     * cin.get(); 이나 cin.ingore(); 넣어서
     * 개행문자를 바로 안만나게 하면됨.
     */

    while(N--){
        string input;
        //char input[31];
        //cin.getline(input, 30, '\n');
        getline(cin, input);
        if(input[0] >= 'a' && input[0] <= 'z')
            input[0] = (char)('A' + input[0] - 'a');
        cout << input <<  endl;
    }
    return 0;
}
