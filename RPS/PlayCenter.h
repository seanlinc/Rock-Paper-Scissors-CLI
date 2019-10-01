//
// Created by admin on 10/1/19.
//

#ifndef RPS_PLAYCENTER_H
#define RPS_PLAYCENTER_H
#include <iostream>
#include <string>
using namespace std;

class PlayCenter{
public:
    PlayCenter();
    void Manu();
    void start();
    void compare(string, string);
private:
    int AIscore;
    int PlayerScore;
    int round;
};
#endif //RPS_PLAYCENTER_H
