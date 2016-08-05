#include <iostream>

using namespace std;

int main (void) {

    int note[8];
    bool asc = true, dsc = true;
    for(int i=0 ; i<8 ; i++)
        cin >> note[i];

    for(int i=0 ; i<8 ; i++){
        if((i+1) != note[i]){
            asc = false;
            break;
        }
    }
    for(int i=0 ; i<8 ; i++){
        if((8 - i) != note[i]){
            dsc = false;
            break;
        }
    }

    if(!asc && !dsc)
        cout << "mixed" << endl;
    else if(asc)
        cout << "ascending" << endl;
    else if(dsc)
        cout << "descending" << endl;

    return 0;
}
