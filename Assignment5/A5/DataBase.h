#ifndef DATABASE
#define DATABASE
#include <iostream>
#include <sstream>
#include <fstream>
#include <unordered_map>
using namespace std;
class DataBase {
public:
	DataBase() {
		LoadDataBase();
	}

	// 1 S
	// 2 R
	// 3 P
	int NextChoice(string str, string filename) {
		if (filename == "random.txt") {
			UpdateDataBase(str + " 1", true);
			return 0;
		}
		else {
			int playerChoice = SearchDataBase(str);
			int machineChoice;
			if (str == "")
				return (rand() % 3 + 1);
			if (playerChoice == -1) {
				machineChoice = (rand() % 3 + 1);
				UpdateDataBase(str + " 1", true);
			}
			else {
				UpdateDataBase(str + " 1", false);
				if (playerChoice == 1)
					machineChoice = 2;
				else if (playerChoice == 2)
					machineChoice = 3;
				else
					machineChoice = 1;
			}
			return machineChoice;
		}
		return 0;
	}
	//if the enter is not appear in the database, we return -1;

	int SearchDataBase(string str){  // Search the current string and return last sting
		auto it = DataBaseMap.find(str);
		char lastChar;
		if (it == DataBaseMap.end()) {
			return -1;
		}
		lastChar = str.back();
		return (lastChar - '0');
	}


	void LoadDataBase() {
		ifstream input;
		input.open("ML.txt");
		if (input.fail()) {
			cout << "Unable to open input files" << endl;
		}

		string line;
		string history;
		string str;
		int frequent;
		int count = 0;
		input >> line;
		while (input) {
			istringstream(line) >> str;
			if (count == 0) {
				history = str;
				count++;
			}
			else {
				frequent = stoi(str);
				count = 0;
				DataBaseMap[history] = frequent;
			}
			input >> line;
		}

		input.close();
	}

	string CharToStr(char * contentChar)
	{
		string tempStr;
		for (int i = 0; contentChar[i] != '\0'; i++)
		{
			tempStr += contentChar[i];
		}
		return tempStr;
	}

	void UpdateDataBase(string stri, bool update) {
		if (update == true) {
			ofstream output;
			output.open("ML.txt", ios::app);
			if (output.fail()) {
				cout << "Unable to open input files" << endl;
			}
			//output << "\n";
			output << stri + "\n";
			output.close();
		}
		else {
			stri.pop_back();
			stri.pop_back();
			fstream fs("ML.txt", ios::binary | ios::out | ios::in);
			ifstream input;
			input.open("ML.txt");
			if (input.fail()) {
				cout << "Unable to open input files" << endl;
			}
			string line;
			string history;
			string str;
			int frequent;
			int count = 0;
			int counter = 0;
			input >> line;
			while (input) {
				istringstream(line) >> str;
				if (count == 0) {
					history = str;
					count++;
				}
				else {
					frequent = stoi(str);
					count = 0;
					if (history == stri) {
						frequent++;
						int size = history.size();
						fs.seekp(size + 1, ios::beg);
					}
					counter++;

				}
				input >> line;
			}
			input.close();


			ifstream in;
			in.open("ML.txt");

			string strFileData = "";
			int linenum = 1;
			char tmpLineData[1024] = { 0 };
			while (in.getline(tmpLineData, sizeof(tmpLineData)))
			{
				if (linenum == counter)
				{
					strFileData += stri + " " + to_string(frequent);
					strFileData += "\n";
				}
				else
				{
					strFileData += CharToStr(tmpLineData);
					strFileData += "\n";
				}
				linenum++;
			}
			in.close();
			ofstream out;
			out.open("ML.txt");
			out.flush();
			out << strFileData;
			out.close();
		}
	}
	unordered_map<string, int> DataBaseMap;
};

#endif

