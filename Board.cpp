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
void Board::Print_Board()
{
    cout<< endl;
    int count = 0;
    int column = 0;
    char letter[11] = {'A','B','C','D','E','F','G','H','I','J','K'};

    while(column < Columns) {
        if (column >= 10){
            cout << "  " << (column + 1) << "  ";
            column = column + 1;
        }
        else {
            cout << "    " << (column + 1) << " ";
            column = column + 1;
        }
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
        if (column >= 10){
            cout << "  " << (column + 1) << "  ";
            column = column + 1;
        }
        else {
            cout << "    " << (column + 1) << " ";
            column = column + 1;
        }
    }
    cout << endl;
}

//==============================
//Function to change the board
//==============================
char* Board:: Change_Board(char*pieces, Player player, char game_piece, string name, bool win) {
    char *new_Board;
    new_Board = *Gameboard;
    string position;
    int x = 0;
    int y = 0;
    char rows[11] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k'};
    int columns[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

    cout << ", where do you want to move?:" << endl;
    cin >> position;
    //implement  code to see if input is valid
    if (position.length() == 3) {

            y = stoi(position.substr(1, 2)) -1;
    }
    else {
            y = stoi(position.substr(1)) - 1;
    }


    if ( position[0] == rows[0] || position[0] == toupper(rows[0])){
            x = 0;
        }
    else if ( position[0] == rows[1] || position[0] == toupper(rows[1])) {
            x = 1;
    }
    else if ( position[0] == rows[2] || position[0] == toupper(rows[2])) {
            x = 2;
    }
    else if ( position[0] == rows[3] || position[0] == toupper(rows[3])) {
            x = 3;
    }
    else if ( position[0] == rows[4] || position[0] == toupper(rows[4])) {
            x = 4;
    }
    else if ( position[0] == rows[5] || position[0] == toupper(rows[5])) {
            x = 5;
    }
    else if ( position[0] == rows[6] || position[0] == toupper(rows[6])) {
            x = 6;
    }
    else if ( position[0] == rows[7] || position[0] == toupper(rows[7])) {
            x = 7;
    }
    else if ( position[0] == rows[8] || position[0] == toupper(rows[8])) {
            x = 8;
    }
    else if ( position[0] == rows[9] || position[0] == toupper(rows[9])) {
            x = 9;
    }
    else if ( position[0] == rows[10] || position[0] == toupper(rows[10])) {
            x = 10;
    }
    else{
            cout<<"Invalid Input"<< endl;

    }
    Gameboard[x][y] = game_piece;

    //check wins

    //check vertical
    if (Gameboard[x][y] == game_piece && Gameboard[(x-1)][y] == game_piece && Gameboard[(x+1)][y] == game_piece){
        player.Print_First_Name();
        cout << " Wins";
        player.Set_Wins(1);
        Gameboard[x][y] = toupper(game_piece);
        Gameboard[x][y] = toupper(game_piece);
        Gameboard[x][y] = toupper(game_piece);
        win = !win;
        winner = win;
    }

    //Check horizontal
    if(Gameboard[x][y] == game_piece && Gameboard[x][(y-1)] == game_piece && Gameboard[x][(y+1)] == game_piece){
        player.Print_First_Name();
        cout << " Wins";
        player.Set_Wins(1);
        Gameboard[x][y] = toupper(game_piece);
        Gameboard[x][y] = toupper(game_piece);
        Gameboard[x][y] = toupper(game_piece);
        win = !win;
        winner = win;
    }

    //check diagonal
    if((Gameboard[x][y] == game_piece && Gameboard[(x-1)][(y-1)] == game_piece && Gameboard[(x+1)][(y+1)]) || (Gameboard[x][y] == game_piece && Gameboard[(x-1)][(y+1)] && Gameboard[(x+1)][(y-1)])){
        player.Print_First_Name();
        cout << " Wins";
        player.Set_Wins(1);
        Gameboard[x][y] = toupper(game_piece);
        Gameboard[x][y] = toupper(game_piece);
        Gameboard[x][y] = toupper(game_piece);
        win = !win;
        winner = win;
    }

    return *Gameboard;
}

//=============================
//Function to check the board
//=============================
void Board::Check_Board(char* pieces, Player player,char game_piece,string name,bool win)
{
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
