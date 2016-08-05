#include <iostream>
#include <string>

using namespace std;


int main (void) {
    
    int N;
    cin >> N;
    cin.ignore();
    while(N--){
        int alphabet[26] = {0. };
        string input;
        getline(cin, input);

        for(int i=0 ; i<input.size() ; i++){
            if(input[i] >= 'A' && input[i] <= 'Z')
                alphabet[input[i] - 'A']++;
            else if(input[i] >= 'a' && input[i] <= 'z')
                alphabet[input[i] - 'a']++;
        }

        string missing = "";
        for(int i=0 ; i<26 ; i++){
            if(alphabet[i] == 0)
                missing += (char)(i + 'a');
        }

        if(missing.size() == 0)
            cout << "pangram" << endl;
        else
            cout << "missing " << missing << endl;     
    }

    return 0;
}
