// file: main.cpp
#include <iostream>
#include "chess.h"

void get_move(char chess[8][8], int & r0, int &c0, int &r1, int &c1);


void get_move(char chess[8][8], char turn, int & r0, int &c0, int &r1, int &c1)
{
    println(chess);
    std::cout << turn << "'s turn\n"
              << "row, column to pick up: ";
    std::cin >> r0 >> c0;
    std::cout << "row, column to place: ";
    std::cin >> r1 >> c1;
}

int main()
{
    char chess[8][8];
    init(chess);

    char turn = 'W';
    while (1)
    {
        // get the move from user
        int r0, c0, r1, c1;
        get_move(chess, turn, r0, c0, r1, c1);

        // switch turn
        turn = (turn == 'W' ? 'B' : 'W');
    }
    return 0;
}
