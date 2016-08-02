#include <iostream>
#include <vector>       // STL vector
#include <stdexcept>    // std::out_of_range 사용하기 위하여 선언

using namespace std;


int main (void) {

    vector<int> v(5);       // 5개의 elements를 0으로 초기화하여 선언
    cout << "size: " << v.size() << endl;
    cout << "capacity: " << v.capacity() << endl;

    vector<int>().swap(v);    // 임의의 vector 생성하여 swap...(?)
    cout << "size: " << v.size() << endl;
    cout << "capacity: " << v.capacity() << endl;

    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);
    cout << v1[0] << ", " << v1.at(0) << ", " << v1.front() << endl;    //v1 첫번째 element
    cout << v1[4] << ", " << v1.at(4) << ", " << v1.back() << endl;    //v1 마지막 element
    
    v1.front() = 100;
    v1.back() = 500;
    cout << v1[0] << ", " << v1.at(0) << ", " << v1.front() << endl;    //v1 첫번째 element
    cout << v1[4] << ", " << v1.at(4) << ", " << v1.back() << endl;    //v1 마지막 element


    try{
        cout << v.at(10) << endl;
        // []로 접근하면 빠르게 접근하지만, 범위 check 하지 않음
        // at()으로 접근하면 범위 check 수행하고 
        // 범위에서 벗어나면 out_of_range 를 throw 한다.
    }
    catch (out_of_range &e) {
        cout << e.what() << endl;
    }


    return 0;
}
