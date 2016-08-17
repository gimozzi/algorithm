#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int main (void) {
    
    string str1, str2, str = "";
    char op;
    cin >> str1 >> op >> str2;
    if(op == '+'){
        if(str1.size() < str2.size()){
            swap(str1, str2);            
        }
        int n = str1.size(), m = str2.size();
        for(int i=0 ; i<str1.size() ; i++){
            str += str1[i];
            if( (i >= (n-m)) && (str2[i-(n-m)] == '1') )
                str[i]++;
        }
    }
    else if(op == '*'){
        str = str1;
        for(int i=0 ; i<str2.size()-1 ; i++)
            str += '0';
    }
    cout << str << endl;


    return 0;
}
