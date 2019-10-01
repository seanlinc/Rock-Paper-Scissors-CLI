//
// Created by admin on 10/1/19.
//

#include <iostream>
#include "AI.h"
#include "Player.h"
#include "DataBase.h"
#include "PlayCenter.h"
using namespace std;
PlayCenter::PlayCenter(){
    round = 20;
    PlayerScore = 0;
    AIscore = 0;
}

void PlayCenter::Manu(){

}

void PlayCenter::compare(string playerchoice, string AIchoice){
    if(playerchoice == "Rock" && AIchoice == "Paper"){
        AIscore++;
    }else if(playerchoice == "Rock" && AIchoice == "Scissors"){
        PlayerScore++;
    }else if(playerchoice == "Rock" && AIchoice == "Rock"){
        return;
    }else if(playerchoice == "Paper" && AIchoice == "Rock"){
        PlayerScore++;
    }else if(playerchoice == "Paper" && AIchoice == "Paper"){
        return;
    }else if(playerchoice == "Paper" && AIchoice == "Scissors"){
        AIscore++;
    }else if(playerchoice == "Scissors" && AIchoice == "Rock"){
        AIscore++;
    }else if(playerchoice == "Scissors" && AIchoice == "Paper"){
        PlayerScore++;
    }else if(playerchoice == "Scissors" && AIchoice == "Scissors"){
        return;
    }
}
void PlayCenter::start(){
    string control;
    cout << "Entern any key to start or Entern q to quit";
    cin >> control;
    DataBase Record;
    while(control != "q"){
        Player p;
        string name;
        AI ai;
        string playerchoice, AIchoice;
        cout << "input your name:" << endl;
        cin >> name;
        p.setName(name);
        for(int i = 0; i < 20; i++){
            playerchoice = p.PlayerChoice();
            AIchoice = ai.AIChoice();
            compare(playerchoice, AIchoice);
            cout << "Player score: " << PlayerScore << "   AI score: " << AIscore << endl;
        }
        p.setScore(PlayerScore);
        ai.setScore(AIscore);
        Record.insertData(p.getName(), p.getScore());

        cout << endl << "**check database please Entern 1**";
        int checkdata;
        cin >> checkdata;
        if(checkdata == 1){
            Record.display();
        }

        cout << "Entern any key to start or Entern q to quit";
        cin >> control;
    }
}




