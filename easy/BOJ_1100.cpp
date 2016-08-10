#include <iostream>

using namespace std;


int main (void) {

    int board[8][8] = {0. };
    int piece[8][8] = {0, };

    char input;
    for(int i=0 ; i<8 ; i++){
        for(int j=0 ; j<8 ; j++){
            cin >> input;
            if(input == 'F')
                piece[i][j] = 1;
        }
    }

    //board setting
    for(int i=0 ; i<8 ; i++){
        for(int j=0 ; j<8 ; j++){
            if((i+j) % 2 == 0)
                board[i][j] = 1;
        }
    }

    int sum = 0;

    for(int i=0 ; i<8 ; i++){
        for(int j=0 ; j<8 ;j++){
            if(board[i][j] && piece[i][j])
                sum++;
        }        
    }

    cout << sum;

    return 0;
}
