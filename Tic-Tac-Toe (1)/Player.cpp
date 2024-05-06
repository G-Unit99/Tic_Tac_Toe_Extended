#include"Player.h"

//=================
//Mutator Functions
//=================

//=============
//Constructor
//=============
Player::Player(string name, int wins, int losses, int draws, char piece)
{
  Name = name;
  Wins = wins;
  Losses = losses;
  Draws = draws;
}

//============
//Destructor
//============
Player::~Player()
{

}

//=============================
//Function to set player name
//=============================
void Player::Set_Name(string name)
{
  Name = name;
}

//=============================
//Function to set player wins
//============================= 
void Player::Set_Wins(int wins)
{
  Wins = Wins + wins;

}

//===============================
//Fucntion to set player losses
//===============================
void Player::Set_Losses(int losses)
{
  Losses = Losses + losses;
}

//=============================
//Function to set player draws
//============================
void Player::Set_Draws(int draws)
{
  Draws = Draws + draws;
}

//=================
//Accesor Functions
//=================

//==============================
//Function to print player name
//==============================
void Player::Print_Name()
{
  cout << Name;
}

//=======================================
//Function to print player's first name
//=======================================
void Player::Print_First_Name(string name)
{
  for(int i = 0; i < name.size();i++){
    
    if (name[i] != ' '){
      cout << name[i];
    }

    else if (name[i] == ' '){
      break;
    }
  }
}

//===============================
//Function to print player wins
//===============================
void Player::Print_Wins()
{
  cout << Wins;
}

//=================================
//Function to print player losses
//=================================
void Player::Print_Losses()
{
  cout << Losses;
}

//================================
//Function to print player draws
//================================
void Player::Print_Draws()
{
  cout << Draws;
}
