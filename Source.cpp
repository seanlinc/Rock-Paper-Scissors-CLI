#include <iostream>
#include <cstdlib>
#include <ctime>
#include "AI.h"

using namespace std;

void StartGame();
//int AI();

int main()
{
	int startGame = 0;
	int select;
	srand(time(NULL));

	cout << "Welcome to Rock-Paper-Scissors." << endl;
	cout << "Would you like to play? (1 for yes, 2 for no)" << endl;
	cin >> startGame;

	while (1)
	{
		if (startGame == 1)
		{
			cout << "Game Start!" << endl;
			StartGame();
			cout << "Game Over!" << endl;
			cout << endl << "Would you like to play again? Enter 1 for yes, or 2 for no." << endl;
			cin >> startGame;
		}
		else if (startGame == 2)
		{
			cout << "Shutting down..." << endl;
			return 0;
		}
		else
		{
			cout << "Please select either 1 for yes or 2 for no." << endl;
			cin >> startGame;
		}
	} 

	return -1;
}

void StartGame()
{
	AI *pAI = new AI();
	AIFactory *pAIFactory = pAI->getAI();
	int playerChoice;
	int AIchoice;
	int playerScore = 0;
	int AIscore = 0;
	int round = 1;

	while (round != 20) //game loop
	{
		cout << endl << "**Round " << round << "**" << endl;
		cout << "**Score** Player: " << playerScore << " AI: " << AIscore << endl;
		cout << "Please Select Rock (1), Paper (2), or Scissors (3)." << endl;
		cout << "Player Choice: ";
		cin >> playerChoice;

		if (playerChoice != 1 && playerChoice != 2 && playerChoice != 3)
		{
			cout << endl << "Invalid Choice." << endl;
		}
		else
		{
			//AIchoice = AI();
			AIchoice = pAIFactory->AI_choice();

			//Player choice text
			if (playerChoice == 1)
			{
				cout << "Player has chosen Rock." << endl;
			}
			else if (playerChoice == 2)
			{
				cout << "Player has chosen Paper." << endl;
			}
			else
			{
				cout << "Player has chosen Scissors." << endl;
			}

			//AI choice text
			if (AIchoice == 1)
			{
				cout << "AI has chosen Rock." << endl;
			}
			else if (AIchoice == 2)
			{
				cout << "AI has chosen Paper." << endl;
			}
			else
			{
				cout << "AI has chosen Scissors." << endl;
			}

			//Winner Descision
			if (playerChoice == 1 && AIchoice == 1)
			{
				cout << "Tie" << endl;
			}
			else if (playerChoice == 1 && AIchoice == 2)
			{
				cout << "AI wins" << endl;
				AIscore++;
			}
			else if (playerChoice == 1 && AIchoice == 3)
			{
				cout << "Player wins" << endl;
				playerScore++;
			}
			else if (playerChoice == 2 && AIchoice == 1)
			{
				cout << "Player wins" << endl;
				playerScore++;
			}
			else if (playerChoice == 2 && AIchoice == 2)
			{
				cout << "Tie" << endl;
			}
			else if (playerChoice == 2 && AIchoice == 3)
			{
				cout << "AI wins" << endl;
				AIscore++;
			}
			else if (playerChoice == 3 && AIchoice == 1)
			{
				cout << "AI wins" << endl;
				AIscore++;
			}
			else if (playerChoice == 3 && AIchoice == 2)
			{
				cout << "Player wins" << endl;
				playerScore++;
			}
			else if (playerChoice == 3 && AIchoice == 3)
			{
				cout << "Tie" << endl;
			}

		}
		round++;
	} //end game loop

}

/*
int AI()
{
	int AIchoice = rand() % 3 + 1;
	return AIchoice;
}
*/