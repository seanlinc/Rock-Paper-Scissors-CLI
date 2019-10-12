#ifndef MLCHOICE
#define MLCHOICE
#include <iostream>
#include "Choice.h"
#include "RandomChoice.h"
#include "DataBase.h"
using namespace std;
// in the map, we only store the string odd number of string: 
//for example SPS   -> S(1) and S(2) as player choice, we store SPS as
// key and frequent as value;
class MLChoice : public ChoiceBase{
public:
	MLChoice() {
		myData.LoadDataBase();
	}
	int Choose(string str){  // based on current string 
		return myData.NextChoice(str, "ML.txt");
	}
private:
	DataBase myData;
};

#endif