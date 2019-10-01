//
// Created by admin on 10/1/19.
//

#include "AI.h"
#include "Choice.h"
#include <iostream>

AI::AI(){
    AIScore = 0;
}
string AI::AIChoice(){
    Choice obj;
    return obj.getChoice();
}

void AI::setScore(int score){
    AIScore = score;
}

int AI::getScore(){
    return AIScore;
}