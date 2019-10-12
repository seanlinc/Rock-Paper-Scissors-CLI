#ifndef RANDOMCHOICE
#define RANDOMCHOICE
#include "Choice.h"
#include <iostream>
using namespace std;
class RandomChoice : public ChoiceBase {
public:
	int Choose(string) {
		return (rand() % 3 + 1);
	}
};

#endif