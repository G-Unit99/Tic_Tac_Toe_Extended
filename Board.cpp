#include"Board.h"

//============
//Constructor
//============
Board::Board()
{

}

//===========
//Destructor
//===========
Board::~Board()
{

}

//===========================
//Function to set the board
//===========================
char* Board:: Set_Board(char*pieces)
{
    char * new_Board = new char[9];
    new_Board = pieces;

    *(pieces + 0) = '1';
    *(pieces + 1) = '2';
    *(pieces + 2) = '3';
    *(pieces + 3) = '4';
    *(pieces + 4) = '5';
    *(pieces + 5) = '6';
    *(pieces + 6) = '7';
    *(pieces + 7) = '8';
    *(pieces + 8) = '9';

    return new_Board;
}

//=============================
//Function to print the board
//=============================
void Board::Print_Board(char* pieces)
{
    cout<< endl;
    int count = 0;

    for (int i = 0; i < 3; i++){

        cout << "+---+---+---+" << endl << "|";

        for (int j = 0 ; j <3; j++){

            if (count == 0){
                cout << ' ' << *(pieces + j) << ' ' << "|";
            }

            else if (count == 1){
                cout << ' ' << *(pieces  + 3 + j) << ' ' << "|";
            }

            else {
                cout << ' ' << *(pieces + 6 + j) << ' ' << "|";
            }
        }
        cout << endl;
        count = count + 1;
    }
    cout << "+---+---+---+" << endl;
}

//==============================
//Function to change the board
//==============================
char* Board:: Change_Board(char*pieces, char game_piece)
{
    char * new_Board = new char[9];
    new_Board = pieces;
    int position;

    cout << ", where do you want to move?:" << endl;
    cin >> position;

    for (int i = 0; i < position; i++ ){
        if (i == (position-1)) {
            *(pieces + i) = game_piece;
        }
    }

    return new_Board;
}

//=============================
//Function to check the board
//=============================
void Board::Check_Board(char* pieces, Player player,char game_piece,string name,bool win)
{
    win = false;
    //=======================
    //Check For Row For Wins
    //=======================
    if (*(pieces + 0) == game_piece && *(pieces + 1) == game_piece && *(pieces + 2) == game_piece) {
        cout <<  name + " Wins";
        player.Set_Wins(1);
        *(pieces + 0) = toupper(game_piece);
        *(pieces + 1) = toupper(game_piece);
        *(pieces + 2) = toupper(game_piece);
        win = true;
        winner = win;
    }

    else if ( *(pieces + 3) == game_piece && *(pieces + 4) == game_piece && *(pieces + 5) == game_piece){
        cout <<  name + " Wins";
        player.Set_Wins(1);
        *(pieces + 3) = toupper(game_piece);
        *(pieces + 4) = toupper(game_piece);
        *(pieces + 5) = toupper(game_piece);
        win = true;
        winner = win;
    }

    else if (*(pieces + 6) == game_piece && *(pieces + 7) == game_piece && *(pieces + 8) == game_piece){
        cout <<  name + " Wins";
        player.Set_Wins(1);
        *(pieces + 6) = toupper(game_piece);
        *(pieces + 7) = toupper(game_piece);
        *(pieces + 8) = toupper(game_piece);
        win = true;
        winner = win;
    }

        //======================
        //Check For Column Wins
        //======================
    else if (*(pieces + 0) == game_piece && *(pieces + 3) == game_piece && *(pieces + 6) == game_piece){
        cout <<  name + " Wins";
        player.Set_Wins(1);
        *(pieces + 0) = toupper(game_piece);
        *(pieces + 3) = toupper(game_piece);
        *(pieces + 6) = toupper(game_piece);
        win = true;
        winner = win;
    }

    else if (*(pieces + 1) == game_piece && *(pieces + 4) == game_piece && *(pieces + 7) == game_piece){
        cout <<  name + " Wins";
        player.Set_Wins(1);
        *(pieces + 1) = toupper(game_piece);
        *(pieces + 4) = toupper(game_piece);
        *(pieces + 7) = toupper(game_piece);
        win = true;
        winner = win;
    }

    else if (*(pieces + 2) == game_piece && *(pieces + 5) == game_piece && *(pieces + 8) == game_piece){
        cout <<  name + " Wins";
        player.Set_Wins(1);
        *(pieces + 2) = toupper(game_piece);
        *(pieces + 5) = toupper(game_piece);
        *(pieces + 8) = toupper(game_piece);
        win = true;
        winner = win;
    }

        //=======================
        //Check For Diagonal Wins
        //=======================
    else if (*(pieces + 0) == game_piece && *(pieces + 4) == game_piece && *(pieces + 8) == game_piece){
        cout <<  name + " Wins";
        player.Set_Wins(1);
        *(pieces + 0) = toupper(game_piece);
        *(pieces + 4) = toupper(game_piece);
        *(pieces + 8) = toupper(game_piece);
        win = true;
        winner = win;
    }

    else if (*(pieces + 2) == game_piece && *(pieces + 4) == game_piece && *(pieces + 6) == game_piece){
        cout <<  name + " Wins";
        player.Set_Wins(1);
        *(pieces + 2) = toupper(game_piece);
        *(pieces + 4) = toupper(game_piece);
        *(pieces + 6) = toupper(game_piece);
        win = true;
        winner = win;
    }
}
