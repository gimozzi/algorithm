/*
 * sort() 는 random access iterator 에서만 가능
 * - vector, deque 만 가능하며 그 외의 container는 불가능
 *
 * sort(v.begin(), end());  
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;


int main (void) {

    vector<int> v;

    v.push_back(50);
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    //[50, 10, 20, 30, 40]

    sort(v.begin(), v.end());   // (기본) 오름차순 정렬
    for(vector<int>::iterator iter = v.begin() ; iter < v.end() ; ++iter)
        cout << *iter << " ";
    cout << endl;

    sort(v.begin(), v.end(), greater<int>());   // 내림차순 정렬
    for(vector<int>::iterator iter = v.begin() ; iter < v.end() ; ++iter)
        cout << *iter << " ";
    cout << endl;
    
    

    return 0;
}
