#ifndef PLAYERCENTER
#define PLAYERCENTER

#include <iostream>
#include <string>
#include "Choice.h"
#include "ComputerFactor.h"
#include "MLChoice.h"
#include "RandomChoice.h"
#include "DataBase.h"

using namespace std;
class PlayerCenter {
public:
	//PlayerCenter();
	void Start() {
		cout << "START GAME\n" << "any keys for start and q for quit\n";
		string q;
		getline(cin, q);
		cout << "\n";
		Factory factory;
		ChoiceBase *normal = factory.CreateChoice(RANDOM);
		ChoiceBase *smart = factory.CreateChoice(ML);
		while (q != "q") {
			cout << "1. normal machine\n" << "2. smart machine with ML";
			int level;
			cin >> level;
			// 1 for normal computer choose, 2 for smart machine
			string str;
			DataBase data;
			int PlayerScore = 0;
			int ComputerScore = 0;
			int PlayerChoose;
			int ComputerChoose;
			switch (level) {
			case 1:
				
				for (int i = 0; i < 20; i++) {
					Manual();
					cin >> PlayerChoose;
					ComputerChoose = normal->Choose(str);
					cout << "Computer choose:  " << ComputerChoose << "  " << "Player choose : " << PlayerChoose << endl;
					cout << "Computer Score: " << ComputerScore << "  " << "Player choose: " << PlayerScore << endl;
					int cmp = compare(PlayerChoose, ComputerChoose);
					if (cmp == 0)
						ComputerScore++;
					else if (cmp == 1)
						PlayerScore++;
					str += to_string(ComputerChoose);
					data.NextChoice(str, "random.txt");
					str += to_string(PlayerChoose);
				}
				if (PlayerScore > ComputerScore)
					cout << "Player win\n" << endl;
				else if (PlayerScore == ComputerScore) {
					cout << "same score\n" << endl;
				}
				else {
					cout << "computer win\n" << endl;
				}
				str = "";
				break;

			case 2:
				for (int i = 0; i < 20; i++) {
					Manual();
					cin >> PlayerChoose;
					int ComputerChoose = smart->Choose(str);
					cout << "Computer choose:  " << ComputerChoose << "  " << "Player choose : " << PlayerChoose << endl;
					cout << "Computer Score: " << ComputerScore << "  " << "Player choose: " << PlayerScore << endl;
					int cmp = compare(PlayerChoose, ComputerChoose);
					if (cmp == 0)
						ComputerScore++;
					else if (cmp == 1)
						PlayerScore++;
					str += to_string(ComputerChoose);
					data.NextChoice(str, "ML.txt");
					str += to_string(PlayerChoose);
				}
				if (PlayerScore > ComputerScore)
					cout << "Player win\n" << endl;
				else if (PlayerScore == ComputerScore) {
					cout << "same score\n" << endl;
				}
				else {
					cout << "computer win\n" << endl;
				}
				str = "";
;				break;
			default:
				cout << "please select the correct level\n";
			}

			cout << "START GAME\n" << "any keys for start and q for quit\n";
			getline(cin, q);
			cout << "\n";

		}
	}


	void Manual() {
		std::cout << "\nplease select\n1. S\n" << "2. R\n" << "3. P\n";
	}

	int compare(int player, int computer) {
		if (player == 1 && computer == 2)
			return 0;
		else if (player == 1 && computer == 3)
			return 1;
		else if (player == 1 && computer == 1)
			return -1;
		else if (player == 2 && computer == 1)
			return 1;
		else if (player == 2 && computer == 2)
			return -1;
		else if (player == 2 && computer == 3)
			return 0;
		else if (player == 3 && computer == 1)
			return 0;
		else if (player == 3 && computer == 2)
			return 1;
		else if (player == 3 && computer == 3)
			return -1;
		return 0;
	}
};

#endif



