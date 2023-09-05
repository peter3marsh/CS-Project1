//
//  main.cpp
//  CS 32 Project 1
//
//  Created by Peter Marsh on 1/8/22.
//


/* #include <iostream>
#include "Game.h"
#include "Gark.h"
#include "Player.h"
#include "Mesa.h"
#include "globals.h"
#include "History.h"

using namespace std;

int main()
{
      // Create a game
      // Use this instead to create a mini-game:   Game g(3, 4, 2);
    Game g(7, 8, 25);

      // Play the game
    g.play();
}
*/

#include "Mesa.h"
#include "Player.h"
#include "History.h"
#include "globals.h"
#include <iostream>
using namespace std;

int main()
{
    Mesa m(3, 4);
    m.addPlayer(2, 4);
    m.addGark(2, 3);
    m.addGark(3, 4);
    m.player()->moveOrAttack(LEFT);
    m.player()->moveOrAttack(DOWN);
    m.player()->moveOrAttack(LEFT);
    m.player()->moveOrAttack(UP);
    m.player()->moveOrAttack(LEFT);
    m.player()->moveOrAttack(DOWN);
    m.history().display();
    cout << "====" << endl;
}
