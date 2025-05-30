#include <iostream>
using namespace std;

char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
char currentPlayer = 'X';

void printBoard() 
{
    for (int i = 0; i < 3; i++) 
	{
        for (int j = 0; j < 3; j++) 
		{
            cout << board[i][j] << " ";
        }
        cout << "\n";
    }
}

bool checkWin() 
{
    for (int i = 0; i < 3; i++) 
	{
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) return true;
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) return true;
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) return true;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) return true;
    return false;
}

void makeMove() 
{
    int move;
    cout << "Player " << currentPlayer << ", enter your move (1-9): ";
    cin >> move;
    move--;
    int row = move / 3, col = move % 3;
    if (board[row][col] != 'X' && board[row][col] != 'O') 
	{
        board[row][col] = currentPlayer;
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    } 
	else 
	{
        cout << "Invalid move! Try again.\n";
    }
}

int main() 
{
    while (true) 
	{
        printBoard();
        makeMove();
        if (checkWin()) 
		{
            printBoard();
            cout << "Player " << ((currentPlayer == 'X') ? 'O' : 'X') << " wins!\n";
            break;
        }
    }
    return 0;
}

