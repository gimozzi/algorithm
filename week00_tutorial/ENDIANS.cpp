#include <iostream>
#include <vector>

using namespace std;


int main (void){

    int C = 0;

    cin >> C;

    unsigned int input = 0;
    unsigned int output = 0;

    vector<int> v1;
    v1.reserve(32);

    vector<int> v2;
    v2.reserve(32);

    for(int i = 0 ; i < C ; i++){
        cin >> input;
        output = 0;
        v1.clear();
        v2.clear();

        // Dec to Bin
        for(int j = 0 ; j < 32 ; j++){
            //cout << "[" << input <<"]";
            if(input < 1){
                v1.push_back(input/2);
                //cout << input/2;
            }
            else{
                v1.push_back(input%2);
                //cout << input%2;
            }
            input /= 2;
        }
        //cout<<endl;

        //for(int j=31 ; j >= 0 ; j--) cout << v1[j];
        //cout<<endl;

        // Endian convert
        for(int k = 0 ; k <4 ; k++){
            for(int j=7 ; j >= 0 ;j--){
                v2.push_back(v1[(k * 8) + j]);
            }
        }

        //for(int j=0 ; j<32 ; j++) cout << v2[j];
        //cout<<endl;

        // Bin to Dec
        for(int j = 31, bin = 1 ; j >= 0 ;j--, bin*=2){
            output += v2[j] * bin;
        }
        cout << output << endl;
    }

    return 0;
}
