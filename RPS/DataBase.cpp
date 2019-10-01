//
// Created by admin on 10/1/19.
//

#include "DataBase.h"
#include <iostream>
using namespace std;

DataBase::DataBase(){

}

void DataBase::insertData(string name, int score){
    database[name].push_back(score);
}

void DataBase::display(){
    for(auto it : database){
        cout << it.first << "   ";
        for(int i = 0; i < it.second.size(); i++){
            cout << it.second[i] << " ";
        }
        cout << endl;
    }
}