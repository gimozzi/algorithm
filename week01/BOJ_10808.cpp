#include <iostream>
#include <string>

using namespace std;


int main (void) {
    
    int alphabet[26] = {0, };
    string input;
    cin >> input;
    
    for(int i=0 ; i<input.size() ; i++)
        alphabet[input[i] - 'a']++;
    
    for(int i=0 ; i<26 ; i++)
        cout << alphabet[i] << " ";
    cout << endl;

    return 0;
}
