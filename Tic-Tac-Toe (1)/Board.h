#ifndef BOARD_H
#define BOARD_H

#include "Player.h"


class Board{
  private:
    char places[9] = {'1','2','3','4','5','6','7','8','9'};
  

  public:
    Board();
    ~Board();
    bool winner = false;
    char *Set_Board(char*);
    void Print_Board(char *);
    char *Change_Board(char*,char);
    void Check_Board(char*, Player,char,string,bool);


};
#endif