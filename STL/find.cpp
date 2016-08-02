/*
 * find() 는 iterator 순차열 범위에서 원하는 값을 가진
 * iterator 위치를 찾아서 반환함
 * 만약 해당 값을 찾지 못한다면 반환되는 iter는 end()를 가리킴
 * find() 는 순방향(forward) iterator 에서 수행됨
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main (void) {

    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    
    vector<int>::iterator iter;
    iter = find(v.begin(), v.end(), 20);
    cout << *iter << endl;

    iter = find(v.begin(), v.end(), 22);
    // [begin, end)
    if(iter == v.end())
        cout << "It doesn't contain 22\n";



    return 0;
}
