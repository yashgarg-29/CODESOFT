

#include <iostream>
using namespace std;

char space[3][3] = {{'1','2','3'}, {'4','5','6'}, {'7','8','9'}};
int row, column;
char token = 'X';
bool draw = false;
string n1, n2;

void displayBoard() {
    cout << "   |   |   \n";
    cout << " " << space[0][0] << " | " << space[0][1] << " | " << space[0][2] << " \n";
    cout << "___|___|___\n";
    cout << "   |   |   \n";
    cout << " " << space[1][0] << " | " << space[1][1] << " | " << space[1][2] << " \n";
    cout << "___|___|___\n";
    cout << "   |   |   \n";
    cout << " " << space[2][0] << " | " << space[2][1] << " | " << space[2][2] << " \n";
    cout << "   |   |   \n";
}

void input() {
    int digit;
    if (token == 'X') {
        cout << n1 << " please enter a number: ";
    } else {
        cout << n2 << " please enter a number: ";
    }
    cin >> digit;

    switch (digit) {
        case 1: row = 0; column = 0; break;
        case 2: row = 0; column = 1; break;
        case 3: row = 0; column = 2; break;
        case 4: row = 1; column = 0; break;
        case 5: row = 1; column = 1; break;
        case 6: row = 1; column = 2; break;
        case 7: row = 2; column = 0; break;
        case 8: row = 2; column = 1; break;
        case 9: row = 2; column = 2; break;
        default:
            cout << "Invalid move\n";
            return;
    }

    if (space[row][column] != 'X' && space[row][column] != 'O') {
        space[row][column] = token;
        token = (token == 'X') ? 'O' : 'X';
    } else {
        cout << "Box already filled! Choose another one.\n";
        input();
    }
}

bool checkWin() {
    for (int i = 0; i < 3; i++) {
        if (space[i][0] == space[i][1] && space[i][1] == space[i][2]) return true;
        if (space[0][i] == space[1][i] && space[1][i] == space[2][i]) return true;
    }
    if (space[0][0] == space[1][1] && space[1][1] == space[2][2]) return true;
    if (space[0][2] == space[1][1] && space[1][1] == space[2][0]) return true;

    return false;
}

bool checkDraw() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (space[i][j] != 'X' && space[i][j] != 'O')
                return false;
    draw = true;
    return true;
}

int main() {
    cout << "Enter the name of the first player: ";
    getline(cin, n1);
    cout << "Enter the name of the second player: ";
    getline(cin, n2);
    cout << n1 << " is Player 1 (X), and " << n2 << " is Player 2 (O).\n";

    while (!checkWin() && !checkDraw()) {
        displayBoard();
        input();
    }

    displayBoard();

    if (checkWin()) {
        if (token == 'O') cout << n1 << " wins!\n";
        else cout << n2 << " wins!\n";
    } else if (draw) {
        cout << "It's a draw!\n";
    }

    return 0;
}
