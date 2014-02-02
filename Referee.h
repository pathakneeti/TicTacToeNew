//
//  Referee.h
//  TicTacToeNew
//
//  Created by Neeti Pathak on 2/2/14.
//  Copyright (c) 2014 Neeti Pathak. All rights reserved.
//
/*
 The Referee class should:
 makeMoves --> passing moves to the Grid, and call Grids print grid
 keep track of PlayerArray
 keep track of scores (who wins etc) --> call checkGrid and update the status boolean (status of the game, win lose forfeit draw)
 terminate the game 
 keep track of legal moves and illegal moves
 
 
 */

#ifndef __TicTacToeNew__Referee__
#define __TicTacToeNew__Referee__

#include <iostream>
#include "Players.h"
#include "Grid.h"
//#include <array>
class Referee{
public:
    Referee(int numberOfPlayers);
    void editCurrentPlayer(int);
    Players * whoseTurn(); //getter to get the current player
    void incrementMove();
    int getMovesTaken();
    void editPlayerArray(Players *, int );
    void makeMove(Grid * grid, Players * p, int i, int j);
private:
    ///Players * currentPlayer; //keep track of the current player
    Players * playerArray; //this can be expanded later to more players
    int movesTaken; //when this goes to 9, end the game
    int status; //1,win or 0.lose or -1,deadlock
    int trackTurn;
    
};

#endif /* defined(__TicTacToeNew__Referee__) */