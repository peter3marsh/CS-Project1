//
//  Game.hpp
//  CS 32 Project 1
//
//  Created by Peter Marsh on 1/9/22.
//

#ifndef Game_h
#define Game_h

class Mesa;

class Game
{
  public:
        // Constructor/destructor
    Game(int rows, int cols, int nGarks);
    ~Game();

        // Mutators
    void play();

  private:
    Mesa* m_mesa;
};

#endif /* Game_hpp */
