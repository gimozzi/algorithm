#include <iostream>
#include <string>

using namespace std;


int main (void) {

    int alphabet[26] = {0, };
    string str;
    cin >> str;
    for(int i=0 ; i<str.size() ; i++)
        alphabet[str[i]-'a']++;
    int sum = 0;
    sum += alphabet['a' - 'a'];
    sum += alphabet['e' - 'a'];
    sum += alphabet['i' - 'a'];
    sum += alphabet['o' - 'a'];
    sum += alphabet['u' - 'a'];

    cout << sum << endl;
    return 0;
}
