#include <iostream>
#include <string>

using namespace std;


int main (void) {

    // 2007. 01. 01 : MON
    string day[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    //                1   2   3   4   5   6   7   8   9  10  11  12
    int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 

    int x, y;
    cin >> x >> y;
    
    int date = 0;
    for(int i=1 ; i<x ; i++)
        date += month[i-1];
    date += y;

    cout << date <<day[date % 7];
        

    return 0;
}
