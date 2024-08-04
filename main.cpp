#include "include/game_setting.h"

int main() {
    char winner;
    char response;
    do{
        winner = ' ';
        response = ' ';
        resetBoard();

        while(checkFreeSpaces() != 0){
            printBoard();

            playerMove();
            winner = checkWinner();
            if(winner != ' ' || checkFreeSpaces() == 0)  // game over
                break;

            computerMove();
            winner = checkWinner();
            if(winner != ' ' || checkFreeSpaces() == 0)  // game over
                break;
        }
        printBoard();
        printWinner(winner);

        cout << " Would you like to play again? (Y/N): ";
        response = toupper(_getch());
    } while (response == 'Y');

    cout << "Thanks for playing!" << endl;

    return 0;
}
