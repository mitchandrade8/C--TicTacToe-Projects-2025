
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

    return 0;
}

// MARK: -

void drawBoard(char *spaces) {
    cout << "     |     |     " << endl;
    cout << "   " << spaces[0] << "  |  " << spaces[1] << "   |   " << spaces[2] << "  " << endl;
    cout << "_____|_____|_____" << endl;
}

void playerMove(char *spaces, char player) {

}

void computerMove(char *spaces, char computer) {

}

bool checkWinner(char *spaces, char player, char computer) {

}

bool checkTie(char *spaces) {

}