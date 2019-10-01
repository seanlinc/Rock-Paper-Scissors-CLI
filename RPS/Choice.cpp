//
// Created by admin on 10/1/19.
//

#include "Choice.h"
#include <iostream>
#include <vector>

using namespace std;

Choice::Choice(){
    storage.push_back("Rock");
    storage.push_back("Paper");
    storage.push_back("Scissors");
}
string Choice::getChoice(){
    return storage[rand() % storage.size()];
}