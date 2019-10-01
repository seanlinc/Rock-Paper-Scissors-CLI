//
// Created by admin on 10/1/19.
//

#include "Player.h"
#include "Choice.h"
#include <iostream>
using namespace std;

Player::Player(){
    PlayerName = "";
    PlayerScore = 0;
}

void Player::setName(string name){
    PlayerName = name;
}

string Player::getName(){
    return PlayerName;
}

void Player::setScore(int score){
    PlayerScore = score;
}

int Player::getScore(){
    return PlayerScore;
}

string Player::PlayerChoice(){
    int choice;
    while(1){
        cout << "1 is Rock" << " "
             << "2 is Paper" << " "
             << "3 is Scissors" << endl;
        cin >> choice;
        switch(choice){
            case(1):
                return "Rock";
            case(2):
                return "Paper";
            case(3):
                return "Scissors";
            default:
                cout << "incorrect, entern again" << endl;
        }
    }

}