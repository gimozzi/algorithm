#include <iostream>
#include <string>

using namespace std;

int main (void) {

    int K;
    cin >> K;
    for(int k=1 ; k<=K ; k++){
        int h;
        cin >> h;

        string str;
        cin >> str;

        for(int i=0 ; i<str.size() ; i++){
            if(str[i] == 'b')
                h--;
            else if(str[i] == 'c' && h>=1)
                h++;
        }
    
        cout << "Data Set " << k << ":" << endl;
        cout << h << endl;
        if(k<K)
            cout << endl;        
    }

    return 0;
}
