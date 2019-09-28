//
//  Player.h
//  Rock-Paper-Scissors
//
//  Created by sean on 9/27/19.
//  Copyright © 2019 Sean. All rights reserved.
//

#ifndef Player_h
#define Player_h

#include <iostream>
#include <string>

class Player
{
public:
    void setMoveChoice(int move);
    int getMoveChoice(int);
    void setPlayerName(string name);
    string getPlayerName();
private:
    int choice;
    string name;
}

#endif /* Player_h */
