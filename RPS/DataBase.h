//
// Created by admin on 10/1/19.
//

#ifndef RPS_DATABASE_H
#define RPS_DATABASE_H
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class DataBase{
public:
    DataBase();
    void insertData(string, int);
    void display();
private:
    unordered_map<string, vector<int>> database;
};
#endif //RPS_DATABASE_H
