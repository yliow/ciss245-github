#include <iostream>

void init(char chess[8][8]);
void println(char chess[8][8]);
void get_move(char chess[8][8], int & r0, int &c0, int &r1, int &c1);

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

void get_move(char chess[8][8], int & r0, int &c0, int &r1, int &c1)
{
    println(chess);
    std::cout << turn << "'s turn\n"
              << "row, column to pick up: ";
    int r0, c0;
    std::cin >> r0 >> c0;
    std::cout << "row, column to place: ";
    int r1, c1;
    std::cin >> r1 >> c1;
}

int main()
{
    char chess[8][8];
    init(chess);

    char turn = 'W';
    while (1)
    {
        // make move
        // check move correctness

        // switch turn
        turn = (turn == 'W' ? 'B' : 'W');
    }
    return 0;
}
