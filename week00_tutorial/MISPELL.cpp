#include <iostream>

using namespace std;


int main (void) {

    int N = 0;
    int num = 1;


    cin >> N;
    while(N--){
        int M;
        string str;
        string str_out;

        cin >> M >> str;

        str[M-1] = ' ';
        for(int i=0 ; i<str.length() ; i++){
            if(str[i] != ' ')
                str_out.push_back(str[i]);
        }
        cout << num++ << " " << str_out << endl;              

    }

    return 0;
}

