//
//  Grid.cpp
//  TicTacToeNew
//
//  Created by Neeti Pathak on 2/2/14.
//  Copyright (c) 2014 Neeti Pathak. All rights reserved.
//

#include "Grid.h"

Grid::Grid(){
    this->gridElements = new char * [3];
    for(int i = 0; i < 3; ++i)
        (this->gridElements)[i] = new char[3];
    
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            (this->gridElements)[i][j]='_';
        }
    }
    //this->trackTurn = 0;
}
char ** Grid::getGridElements(){
    return this->gridElements;
}
int Grid::checkGrid(){
    return 0;
}

string Grid::printGrid(){
    string printGrid = "";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++)
        {
            printGrid += "|";
            printGrid += (this->gridElements[i][j]);
            //printGrid += "|";
        }
        printGrid += "\n";
    }
    
    return printGrid;
}