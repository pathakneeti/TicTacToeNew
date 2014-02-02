//
//  Players.h
//  TicTacToeNew
//
//  Created by Neeti Pathak on 2/2/14.
//  Copyright (c) 2014 Neeti Pathak. All rights reserved.
//

#ifndef __TicTacToeNew__Players__
#define __TicTacToeNew__Players__
#include <string>
#include <iostream>

#endif /* defined(__TicTacToeNew__Players__) */

using namespace std;
class Players{
private:
    string name;
    int wins;
    int losses;
    int forfeit;
    double averageWins;
    char gamePiece; //either X or O
    //Grid grid;
public:
    Players();
    Players(string, char);
    string getName();
    int getWins();
    void win();
    void lose();
    void forfeits();
    char getGamePiece();
    int getForfeits();
    double getAverage();
    int getLosses();
    
};