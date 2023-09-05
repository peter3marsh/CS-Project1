//
//  Gark.hpp
//  CS 32 Project 1
//
//  Created by Peter Marsh on 1/8/22.
//

#ifndef Gark_h
#define Gark_h

class Mesa;

class Gark
{
  public:
        // Constructor
    Gark(Mesa* mp, int r, int c);

        // Accessors
    int  row() const;
    int  col() const;

        // Mutators
    void move();
    bool getAttacked(int dir);

  private:
    Mesa* m_mesa;
    int   m_row;
    int   m_col;
    int   m_health;
};

#endif /* Gark_hpp */
