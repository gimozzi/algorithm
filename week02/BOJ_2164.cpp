#include <iostream>
#include <list>
#include <vector>

using namespace std;


int main (void) {

    int N;
    cin >> N;
    
    list<int> lt;
    vector<int> v(N);

    for(int i=1 ; i<=N ; i++)
        v[i-1] = i;
    //    lt.push_back(i);

    list<int> discard;

    //int size = lt.size();
    int size = v.size();
    int cnt = 1;
    int discard_idx = 0;
    int insert_idx = N-1;
    while(size > 0){
        int tmp;
        if(cnt % 2 == 1){
            tmp = v[discard_idx++];
            discard.push_back(tmp);
            discard_idx %= N;
            size--;
        }
        else{
            insert_idx++;
            insert_idx %= N;
            v[insert_idx] = v[discard_idx++];
            discard_idx %= N;

        }
        
        cnt++;
    }
    

  /* 
    list<int>::iterator iter;
    for(iter=discard.begin() ; iter!=discard.end() ; iter++)
        cout << *iter << " ";
  */  
    cout << discard.back() << endl;
    

    return 0;
}
