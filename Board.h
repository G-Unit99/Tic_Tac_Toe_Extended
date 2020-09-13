#ifndef TIC_TAC_TOE_EXTENDED_BOARD_H
#define TIC_TAC_TOE_EXTENDED_BOARD_H

#include "Player.h"


class Board{
private:
    int Rows;
    int Columns;
    char **Gameboard;
public:
    Board();
    ~Board();
    bool winner = false;
    char *Set_Board(int,int);
    void Print_Board(char *);
    char *Change_Board(char*,char);
    void Check_Board(char*, Player,char,string,bool);


};

#endif //TIC_TAC_TOE_EXTENDED_BOARD_H
