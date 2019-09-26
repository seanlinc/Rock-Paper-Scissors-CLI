#ifndef AI_H
#define AI_H
#include "AIFactory.h"

class AI
{
public:
	AI()
	{
		AIType type = Random;
		AI_setting = AIFactory::make_AI(type);
	}
	~AI()
	{
		if (AI_setting)
		{
			delete[] AI_setting;
			AI_setting = NULL;
		}

	}
	AIFactory* getAI()
	{
		return AI_setting;
	}

private:
	AIFactory* AI_setting;
};

#endif
