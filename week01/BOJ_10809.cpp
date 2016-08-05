#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main (void) {

    vector<int> alphabet(26, -1);
    string input;
    cin >> input;

    for(int i=0 ; i<input.size() ; i++){
        if(alphabet[input[i] - 'a'] == -1)
            alphabet[input[i] - 'a'] = i;
    }

    for(int i=0 ; i<26 ; i++)
        cout << alphabet[i] << " ";
    cout << endl;


    return 0;
}
