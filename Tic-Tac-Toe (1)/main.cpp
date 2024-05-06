//================================================================================================================================
//This Program is a tic tac toe game that allows for two users to play the game
//Player one is X and Player two is O
//At the end of each game the players will be prompted to start another game or end the program
//Each new game will carry over the results of each player from the previous game, but once the program exits, the data is erased
//=================================================================================================================================
#include "Board.h"

int main() {
  //======================
  //Define Player Objects
  //======================

  Player player_one("John doe",0,0,0,'x');
  Player player_two("Jane doe",0,0,0,'o');

  //====================
  //Define Board Object
  //====================

  Board board;
  //========================
  //Set Variables For Game
  //========================

  string player_one_name;
  string player_two_name;
  string first_turn_name;
  string second_turn_name;
  string first_player_name;
  string second_player_name;
  
  bool win = false;
  char play_game;
  int game_moves;
  int turn = 3;
  int game_winner = 3;
  char game_board[9] = {'1','2','3','4','5','6','7','8','9'};

  board.Print_Board(game_board);
  cout << endl;
  //=============
  //Game Intro
  //=============
  cout << "Welcome to Tic Tac Toe!" << endl;
  cout << endl;

  cout << "This is a 3x3 boardgame that involves two players." << endl;
  cout << "Player One is given the gamepiece X, and Player Two is given the gamepiece O." << endl;
  cout << "Whoever gets 3 gamepieces in a row wins." << endl;
  cout << endl;

  cout << "Would you like to play?:(Y/N)" << endl;
  cin >> play_game;
  cin.ignore();
  cout << endl;

  //=========================
  //User Input To Get Names
  //=========================
  cout << "Player One Enter Your Name:"<<endl;
  getline(cin,player_one_name);
  cout << endl;

  cout << "Player Two Enter Your Name:"<< endl;
  getline (cin,player_two_name);
  cout << endl;

  //=======================================
  //User Input To Determine Who Goes First
  //=======================================
  cout << "Who wants to go first? Player 1 or Player 2?:" << endl;
  getline(cin,first_turn_name);
  
  if (first_turn_name == "1" || first_turn_name == "Player 1"){
    turn = 0;
  }

  else {
    turn = 1;
  }

 //======================================
 //Loop For Game, and Play Again Option
 //======================================
  while ((play_game != 'N' || play_game !='n') && (play_game == 'Y' || play_game == 'y') ){

    board.Print_Board(game_board);
    cout << endl;

    player_one.Set_Name(player_one_name);
    player_two.Set_Name(player_two_name);

    first_player_name = player_one_name;
    second_player_name = player_two_name;
    
  while (game_moves != 9){
    if (turn == 0){

      if (game_moves == 0 || game_moves % 2 == 0 ){
          player_one.Print_First_Name(first_player_name);
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
    else if (turn == 1){
      if (game_moves == 0 || game_moves % 2 == 0 ){
          player_two.Print_First_Name(second_player_name);
          board.Change_Board(game_board,'o');
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
      else if (game_moves == 1 || game_moves % 2 == 1){
        player_one.Print_First_Name(first_player_name);
        board.Change_Board(game_board, 'x');
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
    }
  }
  
    if (game_moves == 9 ){
      cout << "It's a Draw" << endl;
      player_one.Set_Draws(1);
      player_one.Print_Draws();
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
    board.Set_Board(game_board);
    board.Print_Board(game_board);
    cout << endl;
    cout << "Would you like to play again?:(Y/N)" << endl;
    cin >> play_game;


  }

  cout<< endl;
  cout << "Hope you had fun! Goodbye. " << endl;
 
}