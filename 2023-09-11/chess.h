// file: chess.h

#ifndef CHESS_H
#define CHESS_H

void init(char chess[8][8]);
void println(char chess[8][8]);
void get_move(char chess[8][8], char turn,
              int & r0, int &c0, int &r1, int &c1);
bool is_valid_move(char chess[8][8], char turn,
                   int & r0, int &c0, int &r1, int &c1);
bool is_black_piece(char);
bool is_white_piece(char);

#endif
