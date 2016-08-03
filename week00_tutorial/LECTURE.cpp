#include <iostream>
#include <vector>

using namespace std;


int main (void) {

    int T = 0;
    string input;   //max size: 1000 , input size: 2n, substring size: 2
    vector<int> v1;
    vector<int> v2;

    int temp;

    v1.reserve(500);
    v2.reserve(500);
    

    cin >> T;

    while(T--){
        cin >> input;
        
        v1.clear();
        v2.clear();

        for(int i=0 ; i<input.length()/2 ; i++){
            v1.push_back((int)input[i * 2]);
            v2.push_back((int)input[(i * 2) + 1]);
        }

        // max 500 substrings 이므로 아무 정렬이나 사용
        // substring 중 두번째 글자 먼저 정렬
        for(int i=0 ; i< input.length()/2 ; i++){
            for(int j=0 ; j<input.length()/2 ; j++){
                if(v2[j] >= v2[i]){
                    temp = v2[j];
                    v2[j] = v2[i];
                    v2[i] = temp;

                    temp = v1[j];
                    v1[j] = v1[i];
                    v1[i] = temp;
                }                
            }
        }
        // substring 중 첫번째 글자 정렬
        for(int i=0 ; i< input.length()/2 ; i++){
            for(int j=0 ; j<input.length()/2 ; j++){
                if(v1[j] >= v1[i]){
                    temp = v2[j];
                    v2[j] = v2[i];
                    v2[i] = temp;

                    temp = v1[j];
                    v1[j] = v1[i];
                    v1[i] = temp;
                }                
            }
        }



        // 출력
        for(int i = 0 ; i<input.length()/2 ; i++)
            cout << (char)v1[i] << (char)v2[i];
        cout << endl;
    }

    return 0;
}
