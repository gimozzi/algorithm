#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct dataset{
    string name;
    int d, m, y;
    int date;       // 0년0월0일 부터 date가 작을 수록 나이가 많음
};

bool comp (struct dataset a, struct dataset b) {
    return a.date > b.date;     //내림차순 정렬
}


int main (void) {

    int M[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int n;
    cin >> n;
    struct dataset data[n];
    for(int i=0 ; i<n ; i++){
        cin >> data[i].name;
        cin >> data[i].d >> data[i].m >> data[i].y;
        int m_day = 0;
        for(int j=1 ; j<= data[i].m ; j++)
            m_day += M[j-1];
        data[i].date = (data[i].y * 365) + m_day + data[i].d;
    }

    sort(data, data + n, comp);

    cout << data[0].name << endl;
    cout << data[n-1].name << endl;       

    return 0;
}
