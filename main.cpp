//
//  main.cpp
//  TicTacToeNew
//
//  Created by Neeti Pathak on 2/2/14.
//  Copyright (c) 2014 Neeti Pathak. All rights reserved.
//

#include <iostream>
//#include "Players.h"
//#include "Grid.h"
#include "Referee.h"
int main()
{
    cout << "Welcome to Tic Tac Toe! " << endl;
    cout << "What is your name?" << endl;
    string name1 = "";
    string name2 = "";
    cin >> name1;
    cout << "Cool! Nice to meet you " << name1 << "! You will be player 0 with X pieces. What is your friend's name ?" << endl;
    cin >> name2;
    cout << "Hi " << name2 << "you will be player 1 with O pieces." << endl;
    Players * p0 = new Players(name1, 'X');
    Players * p1 = new Players(name2, 'O');
    Grid * grid = new Grid();
    Referee * referee = new Referee(2);
    
    (referee->editPlayerArray(p0, 0));
    (referee->editPlayerArray(p1, 1));
    
    while(grid->checkGrid() != 1){
        int row=0;
        int col =0;
       cout << "It is player " << (referee->whoseTurn())->getName() << "'s turn";
        cout << "enter a row please! " << endl;
        cin >> row;
        cout << "enter a column please! " << endl;
        cin >> col;
        referee->makeMove(grid, referee->whoseTurn(), row, col);
        
        cout << grid->printGrid();
        
    }
    //p0->makeMove(grid, 0, 0);
    
    //cout << "It is player " << (grid->whoseTurn())->getName() << "'s turn";
    //cout << (grid->getGridElements())[0][0];
    /*int row = 0, col=0;
     if( row<0 || row>2 || col <0 || col > 2)
     {
     throw "cant access that part of the board!";
     }
     
     try{
     row = 3;
     col = 0;
     one->makeMove(grid, row, col);
     }
     catch (exception e) {
     cerr << e.what() << endl;
     }
     */
    
    
    //NOTE: try doing BAD_ACCESS exception catching, for when you try to place a move on the part of the board that doesnt exist
    return 0;
}
