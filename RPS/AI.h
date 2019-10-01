//
// Created by admin on 10/1/19.
//

#ifndef RPS_AI_H
#define RPS_AI_H
#include <iostream>
#include <string>
using namespace std;
class AI{
public:
    AI();
    string AIChoice();
    void setScore(int);
    int getScore();
private:
    int AIScore;
};
#endif //RPS_AI_H
