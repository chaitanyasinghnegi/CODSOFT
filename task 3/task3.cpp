#include <iostream>

using namespace std;

//displaying board
void displayBoard(char board[3][3]) {
    cout<<"   1   2   3"<<endl; //column numbers
    for (int i = 0; i < 3; ++i) {
        cout<<i+1<<" "; //row numbers
        for (int j = 0; j < 3; ++j) {
            cout << " " << board[i][j] << " ";
            if (j < 2) {
                cout << "|";    //column seperators
            }
        }
        cout << endl;

        if (i < 2) {
            cout << "  -----------\n";  //row seperators
        }
    }
}

//check for win condition
bool checkWin(char board[3][3], char player) {
    for (int i = 0; i < 3; ++i) {
        //checking rows and columns for win condition
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
            return true;
        }
    }

    //checking diagonals for win condition
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return true;
    }

    return false;
}

//checking draw
bool checkDraw(char board[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            //not drawn if some cells are empty
            if (board[i][j] == ' ') {
                return false;
            }
        }
    }
    return true;
}

int main() {
    //initial state of board
    char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    char currentPlayer = 'X';   //first player

    do {

        cout << "Current Board:\n";
        displayBoard(board);

        //input in row | column cell number
        int row, col;
        cout << "Player " << currentPlayer << ", Enter cell (row | column): ";
        cin >> row >> col;

        //check if entered index is empty, then substitute
        if (board[row-1][col-1] == ' ') {
            board[row-1][col-1] = currentPlayer;

            //checking win condition after updating last move
            if (checkWin(board, currentPlayer)) {
                displayBoard(board);
                cout << "Player " << currentPlayer << " wins!\n";
                break;
            }

            //check draw condition after updating last move
            if (checkDraw(board)) { 
                displayBoard(board);
                cout << "It's a draw!\n";
                break;
            }

            //switching players 
            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        } else {
            cout << "Cell already occupied. Try again.\n";  //occupied condition
        }

    } while (true);

    return 0;
}
