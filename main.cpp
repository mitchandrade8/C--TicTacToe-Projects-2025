
#include <iostream>
#include <ctime>

using namespace std;

// MARK: - DECLARING FUNCTIONS:

void drawBoard(char *spaces);
void playerMove(char * spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces);


// MARK: - MAIN FUNCTION
int main() {
    char spaces[9] = {  ' ', ' ', ' ',
                        ' ', ' ', ' ',
                        ' ', ' ', ' ',
                    };
    char player = 'X';
    char computer = 'O';
    bool running = true;

    drawBoard(spaces);

    while (running) {
        playerMove(spaces, player);
        drawBoard(spaces);              // update to show the players move
        computerMove(spaces, computer);
        drawBoard(spaces);              // update to show the computers move
    }

    return 0;
}

// MARK: -

void drawBoard(char *spaces) {
    cout << "     |     |     " << endl;
    cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  " << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  " << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  " << endl;
    cout << "     |     |     " << endl;
}

void playerMove(char *spaces, char player) {
    int number;
    do {
        cout << "Enter a spot to place a marker (1 - 9) : ";
        cin >> number;
        number--; 
        if (spaces[number] == ' ') {
            spaces[number] = player;
            break;
        }
    } while (!number > 0 || !number < 8);
}

void computerMove(char *spaces, char computer) {
    int number;
    srand(time(0));

    while (true) {
        number = rand() % 9;            // random number from 0 - 8
        if (spaces[number] == ' ') {    // Check to make sure the number is a empty space on the board
            spaces[number] = computer;
            break;
        }
    }
}

bool checkWinner(char *spaces, char player, char computer) {

    return true;
}

bool checkTie(char *spaces) {

    return true;
}