#include <iostream>
#include <list>
#include <vector>
#include <string>

using namespace std;


int main (void) {

    vector<string> command;
    command.push_back("push");
    command.push_back("pop");
    command.push_back("size");
    command.push_back("empty");
    command.push_back("front");
    command.push_back("back");

    list<int> lt;
    int size = 0;

    int N;
    cin >> N;
    while(N--){
        string str;
        cin >> str;

        int X;
        if(str == command[0])
            cin >> X;

        int sel;
        for(sel=0 ; sel<command.size() ; sel++){
            if(str == command[sel])
                break;
        }

        switch(sel){
            case 0:
                lt.push_back(X);
                size++;
                break;
            case 1:
                if(lt.empty()){
                    cout << -1 << endl;
                }
                else{
                    cout << lt.front() << endl;
                    lt.pop_front();
                    size--;
                }
                break;
            case 2:
                cout << size << endl;
                break;
            case 3:
                if(lt.empty())
                    cout << 1 << endl;
                else
                    cout << 0 << endl;
                break;
            case 4:
                if(lt.empty())
                    cout << -1 << endl;
                else
                    cout << lt.front() << endl;
                break;
            case 5:
                if(lt.empty())
                    cout << -1 << endl;
                else
                    cout << lt.back() << endl;
                break;
            default:
                break;
        }

    }

    return 0;
}
