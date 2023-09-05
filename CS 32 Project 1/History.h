//
//  History.hpp
//  CS 32 Project 1
//
//  Created by Peter Marsh on 1/10/22.
//

#include "globals.h"

#ifndef History_h
#define History_h

class Mesa;

class History
    {
      public:
        // Constructor/Destructor
        History(int rows, int cols);
        
        // Other functions
        bool record(int r, int c);
        void display() const;
        
    private:
        int nRows;
        int nCols;
        char grid[MAXROWS][MAXCOLS];
        
    };

#endif /* History_hpp */
