//================================================================================================================================
//This Program is a tic tac toe game that allows for at least two users, but up to 7 users to play the game
//Player pieces go from a - g
//At the end of each game the players will be prompted to start another game or end the program
//Each new game will carry over the results of each player from the previous game, but once the program exits, the data is erased
//=================================================================================================================================
#include "Board.h"

int main() {
    //======================
    //Define Player Objects
    //======================

    //====================
    //Define Board Object
    //====================

    Board board;
    //========================
    //Set Variables For Game
    //========================

    string name;

    bool win = false;
    char play_game;
    int game_moves;
    int turn = 0;
    int game_winner = 3;
    int players;
    int rows = 4;
    int columns = 6;
    char piece[7] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
    char *game_board = board.Set_Board(rows, columns);


    board.Print_Board();
    cout << endl;
    //=============
    //Game Intro
    //=============
    cout << "Welcome to Tic Tac Toe!" << endl;
    cout << endl;

    cout << "This is a boardgame that involves two players and can handle up to seven players." << endl;
    cout << "You can choose the dimensions of the board for each game (the limit is 11 x 15)." << endl;
    cout << "Game pieces are assigned A-G." << endl;
    cout << "Whoever gets 3 pieces in a row wins." << endl;
    cout << endl;

    cout << "Would you like to play?:(Y/N)" << endl;
    cin >> play_game;
    cout << endl;

    //=========================
    //User Input To Get Names
    //=========================

    cout << "Enter the number of players:" << endl;
    cin >> players;

    Player a[players];

    cin.ignore();
    cout << endl;

    for (int i = 0; i < players; i++) {
        cout << "Player " << i + 1 << " enter your name:" << endl;
        getline(cin, name);
        a[i].Set_Name(name);
        a[i].Set_Piece(piece[i]);
        cout << endl;
    }


    //======================================
    //Loop For Game, and Play Again Option
    //======================================
    while ((play_game != 'N' || play_game != 'n') && (play_game == 'Y' || play_game == 'y')) {

        cout << "Please enter the dimensions of the board. " << endl;
        cout << endl;

        cout << "Enter the number of rows    -> ";
        cin >> rows;
        cout << endl;

        cout << "Enter the number of columns -> ";
        cin >> columns;
        cout << endl;

        board.Set_Board(rows, columns);
        board.Print_Board();
        cout << endl;

        while (game_moves != (rows * columns)) {

            for (int i = turn; i < players; i++) {
                a[i].Print_First_Name();
                board.Change_Board(game_board,a[i].Get_Piece());
                board.Print_Board();
            }
        }
    }
/*
                if (game_moves == 0 || game_moves % 2 == 0 ){
                    player_one.Print_Last_Name(first_player_name);
                    board.Change_Board(game_board,'x');
                    game_moves = game_moves + 1;

                    if (game_moves >= 3){
                        board.Check_Board(game_board,player_one,'x',first_player_name,win);

                        if (board.winner == true){
                            player_one.Set_Wins(1);
                            player_two.Set_Losses(1);
                            turn = 1;
                            board.Print_Board(game_board);
                            cout << endl;

                            break;
                        }
                    }
                    board.Print_Board(game_board);
                    cout << endl;
                }
                else if (game_moves == 1 || game_moves % 2 == 1){
                    player_two.Print_First_Name(second_player_name);
                    board.Change_Board(game_board, 'o');
                    game_moves = game_moves + 1;

                    if (game_moves >= 3){
                        board.Check_Board(game_board,player_two,'o',second_player_name,win);

                        if (board.winner == true){
                            player_two.Set_Wins(1);
                            player_one.Set_Losses(1);
                            turn = 0;
                            board.Print_Board(game_board);
                            cout << endl;

                            break;
                        }
                    }
                    board.Print_Board(game_board);
                    cout << endl;
                }
            }

        }
/*
        if (game_moves == rows * columns ){
            cout << "It's a Draw" << endl;
            player_one.Set_Draws(1);
            player_two.Set_Draws(1);

            if (turn == 0){
                turn = 1;
                game_winner = 0;
            }
            else {
                turn = 0;
                game_winner = 1;
            }
        }

        cout << "Player One Stats: " << endl;
        player_one.Print_Name();
        cout << endl;
        cout << "Wins: ";
        player_one.Print_Wins();
        cout << endl;

        cout << "Losses: ";
        player_one.Print_Losses();
        cout << endl;

        cout << "Draws: ";
        player_one.Print_Draws();
        cout << endl;
        cout << endl;

        //=================
        //Player Two Stats
        //=================

        cout << "Player Two Stats: " << endl;
        player_two.Print_Name();
        cout << endl;
        cout << "Wins: ";
        player_two.Print_Wins();
        cout<< endl;

        cout << "Losses: ";
        player_two.Print_Losses();
        cout << endl;

        cout << "Draws: ";
        player_two.Print_Draws();
        cout << endl;
        cout << endl;

        board.winner = false;
        game_moves = 0;
        board.Set_Board(rows,columns);
        board.Print_Board(game_board);
        cout << endl;
        cout << "Would you like to play again?:(Y/N)" << endl;
        cin >> play_game;


    }

    cout<< endl;
    cout << "Hope you had fun! Goodbye. " << endl;
    */

}