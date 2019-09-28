//
//  History.h
//  Rock-Paper-Scissors
//
//  Created by sean on 9/27/19.
//  Copyright © 2019 Sean. All rights reserved.
//

#ifndef History_h
#define History_h

#include <iostream>
#include <string>
using namespace std;

class History
{
public:
    string searchHistory(string name);
    void insertHistory(string name, int score);
    void deleteHistory(string name);
    int hightestScoreHistory();
    void displayHistory();

private:
    int data;
}


#endif /* History_h */
