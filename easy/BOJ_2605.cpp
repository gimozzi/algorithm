#include <iostream>
#include <vector>

using namespace std;


int main (void) {

    int S;
    cin >> S;
    //vector<int> num(S);
    int num[S];
    for(int i=0 ; i<S ; i++)
        num[i] = 0;
    
    for(int i=0 ; i<S ; i++){
        int in;
        cin >> in;
        int j;
        for(j=i+in; j>in ; j--){
            num[j] = num[j-1];            
        }
        num[j] = i+1;
    }

    for(int i=S-1 ; i>=0 ; i--)
        cout << num[i] << " ";


    return 0;
}
