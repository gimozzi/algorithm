#include <iostream>
#include <vector>

using namespace std;


int main (void) {

    int N, K;
    cin >> N >> K;
//    vector<int> v(N);  // 미리 N capacity 만큼 만들고 push_back 하면 안됨

    vector<int> v;

    for(int i=1 ; i<=N ; i++){
        if(N % i == 0)
            v.push_back(i);
    }

    /*
    cout << v.size() << "size" << endl;

    for(int i=0 ; i<v.size() ; i++)
        cout << v[i] << " ";
    cout << endl;
    */
    if(v.size() < K)
        cout << 0;
    else
        cout << v[K-1];

    return 0;
}
