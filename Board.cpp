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
char* Board:: Set_Board(int rows, int columns)
{
    Rows = rows;
    Columns = columns;
    Gameboard = new char*[Rows];

    for (int i = 0; i < Rows; i++){
        Gameboard[i] = new char[Columns];
    }

    for (int i = 0; i < Rows; i++){
        for (int j = 0; j < Columns; j++){
            Gameboard[i][j] = ' ';
        }
    }

    return *Gameboard;
}

//=============================
//Function to print the board
//=============================
void Board::Print_Board(char* pieces)
{
    cout<< endl;
    int count = 0;
    int column = 0;
    char letter[11] = {'A','B','C','D','E','F','G','H','I','J','K'};

    while(column < Columns) {
        cout << "    "<< (column + 1) << " ";
        column = column + 1;
    }
     cout << endl;

    for (int i = 0; i < Rows; i++){

        column = 0;
        while(column < Columns){
            cout << "   ---";
            column = column + 1;
        }

        cout<< endl;
        cout <<letter[count] << " :";

        for (int j = 0 ; j < (Columns ); j++){


            if (count == 0){
                cout << ' ' << Gameboard[0][j] << "  :";
            }

            else if (count == 1){
                cout << ' ' << Gameboard[1][j] << "  :";
            }
            else if (count == 2){
                cout << ' ' << Gameboard[2][j] << "  :";
            }
            else if (count == 3){
                cout << ' ' << Gameboard[3][j] << "  :";
            }
            else if (count == 4){
                cout << ' ' << Gameboard[4][j] << "  :";
            }
            else if (count == 5){
                cout << ' ' << Gameboard[5][j] << "  :";
            }
            else if (count == 6){
                cout << ' ' << Gameboard[6][j] << "  :";
            }
            else if (count == 7){
                cout << ' ' << Gameboard[7][j] << "  :";
            }
            else if (count == 8){
                cout << ' ' << Gameboard[8][j] << "  :";
            }
            else if (count == 9){
                cout << ' ' << Gameboard[9][j] << "  :";
            }
            else if (count == 10){
                cout << ' ' << Gameboard[10][j] << "  :";
            }

            else {
                cout << ' ' << Gameboard[11][j] << "  :";
            }
            cout <<" ";
        }
        cout << letter[count];
        cout << endl;
        count = count + 1;

    }

    column = 0;
    while(column < Columns){
        cout << "   ---";
        column = column + 1;
    }

    column = 0;
    cout << endl;
    while(column < Columns) {
        cout << "    " << (column + 1) << " ";
        column = column + 1;
    }
    cout << endl;
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
