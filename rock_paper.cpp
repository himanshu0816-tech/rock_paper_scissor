#include <iostream>
using namespace std;

int main() {
    int player1, player2;

    cout << "1 = Rock, 2 = Paper, 3 = Scissors\n";

    cout << "Player 1 choice: ";
    cin >> player1;

    cout << "Player 2 choice: ";
    cin >> player2;

    if (player1 == player2) {
        cout << "It's a tie!";
    }
    else if (player1 == 1 && player2 == 3) {
        cout << "Player 1 wins!";
    }
    else if (player1 == 2 && player2 == 1) {
        cout << "Player 1 wins!";
    }
    else if (player1 == 3 && player2 == 2) {
        cout << "Player 1 wins!";
    }
    else {
        cout << "Player 2 wins!";
    }

    return 0;
}