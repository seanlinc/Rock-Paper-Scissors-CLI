#ifndef CHOICE
#define CHOICE
#include <iostream>
using namespace std;
class ChoiceBase {
public:
	virtual ~ChoiceBase() {};
	virtual int Choose(string) = 0;
};

#endif