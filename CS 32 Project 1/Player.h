//
//  Player.hpp
//  CS 32 Project 1
//
//  Created by Peter Marsh on 1/8/22.
//

#ifndef Player_h
#define Player_h

class Mesa;

class Player
{
  public:
        // Constructor
    Player(Mesa *mp, int r, int c);

        // Accessors
    int  row() const;
    int  col() const;
    int  age() const;
    bool isDead() const;

        // Mutators
    void   stand();
    void   moveOrAttack(int dir);
    void   setDead();

  private:
    Mesa* m_mesa;
    int   m_row;
    int   m_col;
    int   m_age;
    bool  m_dead;
};


#endif /* Player_hpp */
