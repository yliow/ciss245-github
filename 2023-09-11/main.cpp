// file: main.cpp
#include <iostream>
#include "chess.h"

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
