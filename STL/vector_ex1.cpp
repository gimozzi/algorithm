#include <iostream>
#include <vector>   //STL vector

using namespace std;


int main (void) {

    vector<int> v;
    v.reserve(8);   //8개의 elements 저장 공간 reserve

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    
    for(vector<int>::size_type i = 0 ; i< v.size() ; ++i)
        cout << v[i] << endl;
    cout << endl;

    cout << "size: " << v.size() << endl;
    cout << "capacity: " << v.capacity() << endl;
    cout << "max_size: " << v.max_size() << endl;


    cout << endl << "--resize(10)--" << endl;
    v.resize(10);

    for(vector<int>::size_type i = 0 ; i < v.size() ; ++i)
        cout << v[i] << endl;
    cout << endl;

    cout << "size: " << v.size() << endl;
    cout << "capacity: " << v.capacity() << endl;
    cout << "max_size: " << v.max_size() << endl;


    cout << endl << "--resize(3)--" << endl;
    v.resize(3);

    for(vector<int>::size_type i = 0 ; i< v.size() ; ++i)
        cout << v[i] << endl;
    cout << endl;

    cout << "size: " << v.size() << endl;
    cout << "capacity: " << v.capacity() << endl;
    cout << "max_size: " << v.max_size() << endl;

    
    cout << endl << "--vector clear()--" << endl;
    v.clear();

    if(v.empty())
        cout << "empty" << endl;


    cout << "size: " << v.size() << endl;
    cout << "capacity: " << v.capacity() << endl;
    cout << "max_size: " << v.max_size() << endl;

    return 0;
}
