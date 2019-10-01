//
// Created by admin on 10/1/19.
//

#ifndef RPS_CHOICE_H
#define RPS_CHOICE_H
#include <iostream>
#include <vector>
using namespace std;
class Choice{
public:
    Choice();
    string getChoice();
private:
    vector<string> storage;
};
#endif //RPS_CHOICE_H
