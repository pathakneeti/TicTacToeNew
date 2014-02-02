//
//  Grid.h
//  TicTacToeNew
//
//  Created by Neeti Pathak on 2/2/14.
//  Copyright (c) 2014 Neeti Pathak. All rights reserved.
//

#ifndef __TicTacToeNew__Grid__
#define __TicTacToeNew__Grid__

#include <iostream>
#endif /* defined(__TicTacToeNew__Grid__) */
using namespace std;
class Grid{
    
private:
    char ** gridElements;
    
public:
    Grid(); //constructor
    char ** getGridElements();
    int checkGrid(); //return the status of the board
    string printGrid(); //TODO
    
};

