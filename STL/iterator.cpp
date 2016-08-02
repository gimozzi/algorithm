/*
 * 반복자(iterator)는 container에 저장된 elements를 순회하고 접근하는 방법
 * iterator는 container 내부의 element(object) 가리키고 접근: * 연산자
 * iterator는 다음 element 가리키고, container 의 모든 element를 
 * 순회할 수 있다: ++, !=, == 등 연산자
 *
 * [begin, end) : [begin, iter), [iter, end)
 */

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

    /*
     * iterator 선언
     * vector<int>::iterator iter;
     */
    vector<int>::iterator iter = v.begin();  //vector iterator의 시작점

    cout << iter[3] << endl;    //random access

    iter += 2;  // += 연산
    cout << *iter << endl;      
    //iter 는 v.begin() 으로 선언된 상태기 때문에
    // += 2 하면 현재 iter 위치에서 2개 뒤의 element에 접근                            
    cout << endl;

    for(iter = v.begin() ; iter != v.end() ; ++iter){
        cout << *iter << endl;
    }




    return 0;
}
