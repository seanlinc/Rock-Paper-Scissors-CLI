#ifndef AIFACTORY_H
#define AIFACTORY_H

#include <cstdlib>
#include <ctime>

enum AIType {Random};

class AIFactory
{
public:
	virtual int AI_choice() = 0;
	static AIFactory* make_AI(AIType choice);

};

class RandomAI : public AIFactory
{
public:
	int AI_choice()
	{
		srand(time(NULL));
		int AIchoice = rand() % 3 + 1;
		return AIchoice;
	}
};

AIFactory *AIFactory::make_AI(AIType choice)
{
	if (choice == Random)
		return new RandomAI();
	else
		return NULL;}


#endif

