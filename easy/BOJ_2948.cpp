#include <iostream>
#include <string>

using namespace std;


int main (void) {

    string day[7] = {"Wednesday", "Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday"};
    int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int M, D, date = 0;
    cin >> D >> M;  //D일 M월로 입력 들어옴
    for(int i=1 ; i<M ; i++)
        date += month[i-1];
    date += D;

    cout << day[date % 7] << endl;

    return 0;
}
