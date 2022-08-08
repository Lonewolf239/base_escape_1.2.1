﻿#include "include.h"
using namespace  std;
void start(int start);
void floor3(int fl3, int fr3);
void yard1(int yrd1, int yr1);
void enter1(int ent1, int con1);
void floor1(int fl1, int fr1);
int main(int c) {
	int st, er;
	char f = '0';
	char sae[25];
	if (c == 1) {
		cout << "WW   WW  EEEEE   LL       CCCC    OOOO   MM   MM  EEEEE\nWW   WW  EE      LL      CC  CC  OO  OO  MMM MMM  EE\nWW W WW  EEEE    LL      CC      OO  OO  MM M MM  EEEE\nWWWWWWW  EE      LL      CC  CC  OO  OO  MM   NN  EE\n WW WW   EEEEE   LLLLLL   CCCC    OOOO   MM   MM  EEEEE" << endl << endl;
		cout << "IIIIII  NN  NN\n  II    NNN NN\n  II    NN NNN\n  II    NN  NN\nIIIIII  NN  NN" << endl << endl;
		cout << "BBBBB    AAAA    SSSS   EEEEE\nBB  BB  AA  AA  SS      EE\nBBBBB   AAAAAA   SSSS   EEEE\nBB  BB  AA  AA      SS  EE\nBBBBB   AA  AA   SSSS   EEEEE" << endl << endl;
		cout << "EEEEE    SSSS    CCCC    AAAA   PPPPP   EEEEE\nEE      SS      CC  CC  AA  AA  PP  PP  EE\nEEEE     SSSS   CC      AAAAAA  PPPPP   EEEE\nEE          SS  CC  CC  AA  AA  PP      EE\nEEEEE    SSSS    CCCC   AA  AA  PP      EEEEE" << endl << endl;
		cout << "  11         2222           11\n1111        22  22        1111\n  11           22           11\n  11         22             11\n  11  **    222222  **      11" << endl << "Start: ";
		cin >> f;
		if (f != '0') {
			cout << endl << "Welcome to my first test game\nBase_escape_1.2.1" << endl << "The game has a lot of secrets and easter eggs, but some require internet access" << endl << "Enter number: (1) to start; (2) to load save" << endl;
			cin >> st;
		}
	}
	if (c == 0) {
		cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << "Введите число: (1) для старта; (2) для загрузки сохранения" << endl;
		cin >> st;
	}
	if (st == 2) {
		ifstream file("save.txt");
		if (!file.is_open()) {
			cout << "SAVE FILE MISSING!" << endl;
			start(1);
		}
		else {
			file.getline(sae, 25);
			file.close();
			if (sae[13] == '$') {
				cout << endl << endl << "LOADING SAVE..." << endl << endl;
				cout << endl << endl << "SAVE LOADED SUCCESSFULLY" << endl << endl;
				enter1(1, 0);
			}
			if (sae[11] == '@') {
				cout << endl << endl << "LOADING SAVE..." << endl << endl;
				cout << endl << endl << "SAVE LOADED SUCCESSFULLY" << endl << endl;
				floor3(1, 0);
			}
			if (sae[15] == 'd') {
				cout << endl << endl << "LOADING SAVE..." << endl << endl;
				cout << endl << endl << "SAVE LOADED SUCCESSFULLY" << endl << endl;
				cout << "Which location do you want to go to?\nCourtyard (1)\nFirst floor of the mansion (2)\nSecond floor of the mansion (3)" << endl;
				cin >> er;
				switch (er) {
				case 1:
					yard1(1, 0);
					break;
				case 2:
					enter1(1, 0);
					break;
				case 3:
					floor1(1, 0);
					break;
				}
			}
		}
	}
	if (st == 1) {
		start(1);
	}
	return 0;
}
