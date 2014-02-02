//
//  Players.cpp
//  TicTacToeNew
//
//  Created by Neeti Pathak on 2/2/14.
//  Copyright (c) 2014 Neeti Pathak. All rights reserved.
//

#include "Players.h"
Players::Players(){
    
}
Players::Players(string name, char gamePiece){
    this->gamePiece = gamePiece;
    this->name = name;
}
string Players::getName(){
    return this->name;
}
int Players::getWins(){
    return this->wins;
}
void Players::win(){
    this->wins ++;
}
void Players::lose(){
    this->losses ++;
}
void Players::forfeits(){
    this->forfeit ++;
}
int Players::getForfeits(){
    return this->forfeit;
}
double Players::getAverage(){
    return ((double)(this->wins)/(double)(this->losses + this->wins + this->forfeit));
}
int Players::getLosses(){
    return this->losses;
}

char Players::getGamePiece(){
    return this->gamePiece;
}
