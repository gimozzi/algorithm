#include <iostream>
#include <vector>

using namespace std;


int main (void) {

    int N=0;
    int num = 1;
    vector<string> units;
    vector<float> convert;

    units.reserve(4);
    convert.reserve(4);

    units.push_back("kg");  //kilogram
    convert.push_back(0.4536);
    units.push_back("lb");  //pound
    convert.push_back(2.2046);
    units.push_back("l");   //liter
    convert.push_back(3.7854);
    units.push_back("g");   //gallon
    convert.push_back(0.2642);

    cin >> N;
    while(N--){
        float metric;
        string unit;
        float metric_out;
        string unit_out;

        cin >> metric >> unit;
        
        for(int i=0 ; i<4 ; i++){
            if(unit == units[i]){
                if(i < 2){
                    unit_out = units[(i+1)%2];
                    metric_out = metric * convert[(i+1)%2];
                    break;
                }
                else{
                    unit_out = units[((i+1)%2) + 2];
                    metric_out = metric * convert[((i+1)%2) + 2];
                    break;
                }
            }
        }

        cout << fixed;      // 소수점 고정
        cout.precision(4);  // 소수점 4자리
                            // 아래 showpoint 
        cout << showpoint << num++ << " " << metric_out << " " << unit_out << endl;
    }

    return 0;
}
