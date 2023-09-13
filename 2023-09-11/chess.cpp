// file: chess.cpp

#include <iostream>
#include "chess.h"

bool is_black_piece(char piece)
{
    return ('a' <= piece && piece <= 'z');
}

bool is_white_piece(char piece)
{
    return ('A' <= piece && piece <= 'Z');
}

void get_move(char chess[8][8], char turn,
              int & r0, int & c0, int & r1, int & c1)
{
    while (1)
    {
        println(chess);
        std::cout << turn << "'s turn\n"
                  << "row, column to pick up: ";
        std::cin >> r0 >> c0;
        std::cout << "row, column to place: ";
        std::cin >> r1 >> c1;
        if (is_valid_move(chess, turn, r0, c0, r1, c1))
        {
            return;
        }
    }
}

bool is_valid_move(char chess[8][8], char turn,
                   int & r0, int &c0, int &r1, int &c1)
{
    char piece = chess[r0][c0];
    if (piece == ' ')
    {
        return false;
    }
    else if (turn == 'W' && is_black_piece(piece))
    {
        return false;
    }
    else if (turn == 'B' && is_white_piece(piece))
    {
        return false;
    }
    else if (turn == 'W' && piece == 'P'
             && is_valid_white_pawn_move(chess, r0, c0, r1, c1))
    {
        return true;
    }
    
    return true;
}


bool is_valid_white_pawn_move(char chess[8][8],
                              int r0, int c0, int r1, int c1)
{
    if (r0 == 6) // i.e., initial row
    {
        if ((r1 == r0 - 1 ||
             (r1 == r0 - 2 && chess[c0][r0 - 1] == ' '))
            && (c0 == c1)
            && chess[r1][c1] == ' '
            )
        {
            return true;
        }
        else if (r1 == r0 - 1 &&
                 (c1 == c0 - 1 && is_black_piece(chess[r1][c1]))
                 ||
                 (c1 == c0 + 1 && is_black_piece(chess[r1][c1])))
        {
            return true;
        }
    }
}




void println(char chess[8][8])
{
    std::cout << "+-+-+-+-+-+-+-+-+\n";
    for (int r = 0; r < 8; ++r)
    {
        for (int c = 0; c < 8; ++c)
        {
            std::cout << '|' << chess[r][c];
        }
        std::cout << "|\n";
        std::cout << "+-+-+-+-+-+-+-+-+\n";
    }
}

void init(char chess[8][8])
{
    char pieces[] = "rnbqkbnr";
    for (int c = 0; c < 8; ++c)
    {
        chess[0][c] = pieces[c];
        chess[7][c] = 'A' + pieces[c] - 'a';
    }
    for (int c = 0; c < 8; ++c)
    {
        chess[1][c] = 'p';
        chess[6][c] = 'P';
    }
    for (int r = 2; r < 6; ++r)
    {
        for (int c = 0; c < 8; ++c)
        {
            chess[r][c] = ' ';
        }
    }
}
