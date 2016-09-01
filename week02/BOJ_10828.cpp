#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;


int main (void) {
//    vector<string> _command = {"push", "pop", "size", "empty", "top"};
    vector<string> _command;
    _command.push_back("push");
    _command.push_back("pop");
    _command.push_back("size");
    _command.push_back("empty");
    _command.push_back("top");

    stack<int> st;
    int size = 0;


    int N;
    cin >> N;
    while(N--){
        string str;
        cin >> str;

        int X;
        if(str == _command[0])
            cin >> X;

        int sel;
        for(sel=0 ; sel<_command.size() ; sel++){
            if(str == _command[sel])
                break;
        }

        switch(sel){
            case 0:
                st.push(X);
                size++;
                break;
            case 1:
                if(st.empty())
                    cout << -1 << endl;
                else{
                    cout << st.top() << endl;
                    st.pop();
                    size--;
                }
                break;
            case 2:
                cout << size << endl;
                break;
            case 3:
                if(st.empty())
                    cout << 1 << endl;
                else
                    cout << 0 << endl;
                break;
            case 4:
                if(st.empty())
                    cout << -1 << endl;
                else
                    cout << st.top() << endl;
                break;
            default:
                break;
        }

    }

    return 0;
}
