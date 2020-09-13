#ifndef TIC_TAC_TOE_EXTENDED_PLAYER_H
#define TIC_TAC_TOE_EXTENDED_PLAYER_H

#include<iostream>
#include<string>
using namespace std;

class Player{
private:
    string Name;
    int Wins;
    int Losses;
    int Draws;

public:
//=================
//Mutator Functions
//=================
    Player(string,int,int,int,char);
    ~Player();
    void Set_Name(string);
    void Set_Wins(int);
    void Set_Losses(int);
    void Set_Draws(int);
//=================
//Accesor Functions
//=================
    void Print_Name();
    void Print_First_Name(string);
    void Print_Wins();
    void Print_Losses();
    void Print_Draws();
};
#endif //TIC_TAC_TOE_EXTENDED_PLAYER_H
