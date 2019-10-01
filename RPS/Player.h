//
// Created by admin on 10/1/19.
//

#ifndef RPS_PLAYER_H
#define RPS_PLAYER_H
#include <iostream>
#include <string>
using namespace std;
class Player{
public:
    Player();
    void setName(string name);
    string getName();
    void setScore(int score);
    int getScore();
    string PlayerChoice();
private:
    string PlayerName;
    int PlayerScore;
};
#endif //RPS_PLAYER_H
