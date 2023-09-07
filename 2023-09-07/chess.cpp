#include <iostream>

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

void println(char chess[8][8])
{
}

int main()
{
    char chess[8][8];
    init(chess);
    println(chess);

    return 0;
}
