#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;


int main (void) {

    while(1){
        int n;
        cin >> n;
        if(n == -1)
            break;

        //vector<int> v(n); // 이렇게 되면 
        // n = 6 일때
        // 6 = 0 + 0 + 0 + 0 + 0 + 0 + 1 + 2 + 3 출력됨
        vector<int> v;
        
        int sum = 0;
        for(int i=1 ; i< n ; i++){
            if(n%i == 0){
                sum += i;
                v.push_back(i);
            }
        }
        if(sum == n){
            printf("%d =", n);
            for(int i=0 ; i<v.size() ; i++){
                printf(" %d", v[i]);
                if(i != v.size() - 1)
                    printf(" +");
            }
            printf("\n");
        }
        else
            printf("%d is NOT perfect.\n", n);
        
    }
    return 0;
}
