/*
 * stack 은 LIFO(Last In First Out)의 container
 * stack container의 default container는 deque
 */

#include <iostream>
#include <vector>
#include <stack>

using namespace std;


int main (void) {

    stack<int> st;  //default 는  deque
    //stack<int, vector<int>> st; //vector container 사용하여 stack container 생성
   
    st.push(10);
    st.push(20);
    st.push(30);

    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();


    if(st.empty())
        cout << "emtpy stack" << endl;




    return 0;
}
