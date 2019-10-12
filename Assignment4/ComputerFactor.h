#include <iostream>
#include "RandomChoice.h"
#include "Choice.h"
#include "MLChoice.h"
enum TypeOfChoice
{
	RANDOM,
	ML
};

class Factory {
public:
	ChoiceBase * CreateChoice(TypeOfChoice type) {
		switch (type) {
		case RANDOM:
			return new RandomChoice();
			break;
		case ML:
			return new MLChoice();
			break;
		default:
			break;
		}
		return NULL;
	}
};