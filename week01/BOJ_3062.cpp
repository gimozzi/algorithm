#include <iostream>
#include <string>
#include <cstdlib>      //atoi
#include <algorithm>    //reverse
#include <sstream>      //stringstream

using namespace std;

string intToString (int n) {
    stringstream s;
    s << n;
    return s.str();
}


int main (void) {

    int T;
    cin >> T;
    while(T--){
        string str, reverse_str;
        cin >> str;
        
        reverse_str = str;
        reverse(reverse_str.begin(), reverse_str.end());
        
        int num1 = atoi(str.c_str());
        int num2 = atoi(reverse_str.c_str());

//        string pal = itoa(num1 + num2);   //itoa 는 Microsoft 표준
        string result = intToString(num1 + num2);
        bool pal = true;
        for(int i=0 ; i<result.size()/2 ; i++){
            if(result[i] != result[result.size() - 1 - i]){
                pal = false;
                break;
            }
        }
        

        if(pal)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;    
    }

    return 0;
}
