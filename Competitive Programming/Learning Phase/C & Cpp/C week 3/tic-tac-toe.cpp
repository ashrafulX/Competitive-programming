#include <iostream>
using namespace std;

char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
char currentMarker;
int currentPlayer;

void drawBoard() {
    cout << "-------------" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "| ";
        for (int j = 0; j < 3; j++) {
            cout << board[i][j] << " | ";
        }
        cout << endl;
        cout << "-------------" << endl;
    }
}

bool placeMarker(int slot) {
    int row = (slot - 1) / 3;
    int col = (slot - 1) % 3;

    // Check if slot is already taken
    if (board[row][col] != 'X' && board[row][col] != 'O') {
        board[row][col] = currentMarker;
        return true;
    }
    return false;
}

int checkWinner() {
    // Check rows and columns
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return currentPlayer;
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
            return currentPlayer;
    }
    // Check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return currentPlayer;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return currentPlayer;

    return 0;
}

void swapPlayerAndMarker() {
    if (currentMarker == 'X') currentMarker = 'O';
    else currentMarker = 'X';
    currentPlayer = (currentPlayer == 1) ? 2 : 1;
}

void game() {
    int winner = 0;
    int slot;
    drawBoard();

    for (int i = 0; i < 9 && winner == 0; i++) {
        cout << "Player " << currentPlayer << " (" << currentMarker << "), enter your slot: ";
        cin >> slot;

        // Validate slot and place marker
        if (slot < 1 || slot > 9 || !placeMarker(slot)) {
            cout << "Invalid move! Try again.\n";
            i--;  // Repeat the turn
            continue;
        }

        drawBoard();
        winner = checkWinner();

        if (winner == 0) swapPlayerAndMarker();
    }

    if (winner != 0) {
        cout << "Congratulations! Player " << winner << " wins!\n";
    } else {
        cout << "It's a draw!\n";
    }
}

int main() {
    cout << "Welcome to Tic-Tac-Toe!\n";
    currentPlayer = 1;
    currentMarker = 'X';

    game();

    return 0;
}
