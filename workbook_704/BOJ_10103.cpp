#include <iostream>

using namespace std;


int main (void) {

    int n;
    cin >> n;
    int CY = 100, SD = 100;
    while(n--){
        int CYin, SDin;
        cin >> CYin >> SDin;
        
        if(CYin > SDin)
            SD -= CYin;
        else if(CYin == SDin)
            continue;
        else
            CY -= SDin;

    }
    cout << CY << endl;
    cout << SD << endl;

    return 0;
}
