#include <cstdio>
#include <vector>

using namespace std;


int main (void) {

    int T;
    scanf("%d", &T);
    while(T--){
        int n;
        scanf("%d", &n);
        vector<int> v(n, 0);    //0: 잠김, 1: 열림

        for(int i=1 ; i<=n ; i++){
            for(int j=0 ; j<n ; j++){
                if((j+1)%i == 0)
                    v[j] ^= 1;
            }
        }
        int cnt = 0;
        for(int i=0 ; i<n ; i++){
            if(v[i] == 1)
                cnt++;
        }

        printf("%d\n", cnt);

    }
    return 0;
}
