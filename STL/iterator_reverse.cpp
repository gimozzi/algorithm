/*
 * 반복자(iterator)는 container에 저장된 elements를 순회하고 접근하는 방법
 * iterator는 container 내부의 element(object) 가리키고 접근: * 연산자
 * iterator는 다음 element 가리키고, container 의 모든 element를 
 * 순회할 수 있다: ++, !=, == 등 연산자
 *
 * [begin, end) : [begin, iter), [iter, end)
 */

// reverse_iterator 는 ++, -- 시 정방향 iterator와 반대로 동작함
// 

#include <iostream>
#include <vector>

using namespace std;

int main (void) {

    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    for(vector<int>::iterator iter = v.begin() ; iter != v.end() ; ++iter){
        cout << *iter << endl;
    }
    cout << endl;

    /*
     * iterator 선언
     * vector<int>::iterator iter;
     *
     * reverse iterator 선언
     * vector<int>::reverse_iterator riter(v.rbegin());
     * 
     */
    vector<int>::reverse_iterator riter(v.rbegin());

    for( ; riter != v.rend() ; ++riter)
        cout << *riter << endl;
    cout << endl;






    return 0;
}
