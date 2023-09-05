//
//  History.cpp
//  CS 32 Project 1
//
//  Created by Peter Marsh on 1/10/22.
//

#include "History.h"
#include "globals.h"
#include "Mesa.h"
#include <iostream>

History::History(int rows, int cols){
    nRows = rows;
    nCols = cols;
    for (int r = 0; r < nRows; r++){
        for (int c = 0; c < nCols; c++){
            grid[r][c] = 'A' - 1;
        }
    }
}

bool History::record(int r, int c){
    if (r > nRows || c > nCols || r<1 || c<1){
        return false;
    }
    else {
        if (grid[r][c] != 'Z'){
            grid[r-1][c-1]++;
        }
            return true;
    }
}

void History::display() const{
    clearScreen();
    for (int r=0; r<nRows; r++){
        for (int c=0; c<nCols; c++){
            if (grid[r][c] == 'A' - 1)
                cout << '.';
            else
                cout << grid[r][c];
        }
        cout << '\n';
    }
    cout << endl;
}
