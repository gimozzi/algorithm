#include <iostream>
#include <vector>

using namespace std;


int main (void) {

    int T = 0;
    vector<string> tokens;
    vector<int> tokens_chk;
    
    tokens.reserve(500);
    tokens_chk.reserve(500);

    cin >> T;
    while(T--){
        string str;
        cin >> str;
        tokens.clear();
        tokens_chk.clear();
        string temp;
        vector<int> alphabet(26, 0);

        string out = "";

        for(int i=0 ; i<str.length()/2 ; i++){
            tokens.push_back(str.substr(i*2, 2));
            alphabet[str[i*2] -'a']++;
            tokens_chk.push_back(1);
        }
        

        //for(int i=0 ; i<tokens.size() ; i++) cout << "[" << tokens[i] << "]" << endl;
        //cout << "==" << endl;
        for(int i=0 ; i<tokens.size() ; i++){
            for(int j=0 ; j<tokens.size() ; j++){
                if(i<j && tokens[i][1] > tokens[j][1]){
                    temp = tokens[i];
                    tokens[i] = tokens[j];
                    tokens[j] = temp;
                }
            }
        }
        //for(int i=0 ; i<tokens.size() ; i++) cout << "[" << tokens[i] << "]" << endl;
/*
        for(int i=0 ; i<tokens.size() ; i++){
            for(int j=0 ; j<tokens.size() ; j++){
                if(i<j && tokens[i][0] > tokens[j][0]){
                    temp = tokens[i];
                    tokens[i] = tokens[j];
                    tokens[j] = temp;
                }
            }
        }
*/
 //       for(int i=0 ; i<tokens.size() ; i++) cout << "[" << tokens[i] << "]" << endl;
//        for(int i=0 ; i<tokens.size() ; i++) cout << "[" << tokens[i][1] << "]" << endl;
        
        bool break_flag;
        for(int i=0 ; i<tokens.size() ; i++){
            for(int j=0 ; j<tokens.size() ; j++){
                break_flag = false;
                for(int k=0 ; k<26 ; k++){
                    if(tokens_chk[j] == 1 && alphabet[k] > 0
                            && k == (int)(tokens[j][0] - 'a')){
                        out.append(tokens[j]);
                        tokens_chk[j]--;
                        alphabet[k]--;
                        break_flag = true;
                        break;
                    }
                    else if(alphabet[k] > 0)
                        break;
                }
                if(break_flag)
                    break;
            }        
        }
        cout << out << endl;

/*
        for(int i=0 ; i<tokens.size() ; i++)
            cout << tokens[i];
        cout << endl;
*/
    }


    return 0;
}
