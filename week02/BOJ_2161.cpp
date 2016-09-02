#include <iostream>
#include <list>

using namespace std;


int main (void) {

    int N;
    cin >> N;
    
    list<int> lt;
    for(int i=1 ; i<=N ; i++)
        lt.push_back(i);

    list<int> discard;

    int size = lt.size();
    int cnt = 1;
    while(size > 0){
        int tmp;
        if(cnt % 2 == 1){
            tmp = lt.front();
            lt.pop_front();
            discard.push_back(tmp);
        }
        else{
            tmp = lt.front();
            lt.pop_front();
            lt.push_back(tmp);
        }
        size = lt.size();
        cnt++;
    }
    
    list<int>::iterator iter;
    for(iter=discard.begin() ; iter!=discard.end() ; iter++)
        cout << *iter << " ";
    

    return 0;
}
