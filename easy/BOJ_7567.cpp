#include <iostream>
#include <string>

using namespace std;


int main (void) {

    string str;
    cin >> str;

    int sum = 0;

    for(int i=0 ; i<str.size() ; i++){
        if(i==0)
            sum += 10;
        else{
            if(str[i-1] == str[i])
                sum += 5;
            else
                sum += 10;
        }
    }

    cout << sum;


    return 0;
}
