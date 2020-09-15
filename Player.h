#ifndef TIC_TAC_TOE_EXTENDED_PLAYER_H
#define TIC_TAC_TOE_EXTENDED_PLAYER_H

#include<iostream>
#include<string>
#include <cctype>
using namespace std;

class Player{
private:
    string Name;
    int Wins;
    int Losses;
    int Draws;
    char Piece;

public:
//=================
//Mutator Functions
//=================
    Player();
    ~Player();
    void Set_Name(string);
    void Set_Wins(int);
    void Set_Losses(int);
    void Set_Draws(int);
    void Set_Piece(char);
//=================
//Accessor Functions
//=================
    char Get_Piece();
    string Get_Name();
    void Print_Name();
    void Print_First_Name();
    void Print_Last_Name();
    void Print_Wins();
    void Print_Losses();
    void Print_Draws();
};
#endif //TIC_TAC_TOE_EXTENDED_PLAYER_H
