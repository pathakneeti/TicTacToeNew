//
//  Referee.cpp
//  TicTacToeNew
//
//  Created by Neeti Pathak on 2/2/14.
//  Copyright (c) 2014 Neeti Pathak. All rights reserved.
//
///#include <iostream>
#include "Referee.h"

Referee::Referee(int numberOfPlayers){
    playerArray = new Players [numberOfPlayers];
    this->trackTurn =0;
}
int Referee::getMovesTaken(){
    return this->movesTaken;
}
Players * Referee::whoseTurn(){
    return &(this->playerArray[trackTurn]);
};

void Referee::incrementMove(){
    this->movesTaken ++;
    if (trackTurn == sizeof(playerArray)/sizeof(int) -1) {
        trackTurn =0;
        //std::cout >> (int)sizeof(playerArray)/sizeof(int)  >> "  " >> std::endl;
    }
    else{
        trackTurn ++;
    }
}

void Referee::editPlayerArray(Players * p, int i ){
    this->playerArray[i] = *p;
}

void Referee::makeMove(Grid * grid, Players * p, int i, int j){
    (grid->getGridElements())[i][j] = p->getGamePiece();
    this->incrementMove();
}