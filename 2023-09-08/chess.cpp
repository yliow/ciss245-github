// file: chess.cpp

#include "chess.h"

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
