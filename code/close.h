#include <iostream>
using namespace std;
void cycle1(int cycle1);
void cycle2(int cycle2);
void cycle3(int cycle3);
void close1(int cl1) {
	int x, y;
	if (cl1 == 1) {
		cout << "___________________________________________\nYou have opened the top drawer... it is empty\nOpen the bottom drawer 1\nLeave 2" << endl;
		cin >> x;
		if (x == 1) {
			close1(2);
		}
		else {
			cycle1(1);
		}
	}
	if(cl1==2) {
		cout << "___________________________________________\nYou have opened the bottom drawer... there is a knife\nTake knife 1\nLeave 2" << endl;
		cin >> y;
		if (y == 1) {
			cout << "___________________________________________\nYou took a knife..." << endl;
			cycle2(1);
		}
		else {
			cycle1(1);
		}
	}
}
void close2(int cl2) {
	int x, y;
	if (cl2 == 1) {
		cout << "___________________________________________\nYou have opened the top drawer... it is empty\nOpen the bottom drawer 1\nLeave 2" << endl;
		cin >> x;
		if (x == 1) {
			close2(2);
		}
		else {
			cycle2(1);
		}
	}
	if (cl2 == 2) {
		cout << "___________________________________________\nYou opened the bottom drawer... it's empty\nLeave 1" << endl;
		cin >> y;
	}
	if (y == 1) {
		cycle2(1);
	}
}
void close3(int cl3) {
	int x, y;
	if (cl3 == 1) {
		cout << "___________________________________________\nYou have opened the top drawer... it is empty\nOpen the bottom drawer 1\nLeave 2" << endl;
		cin >> x;
		if (x == 1) {
			close3(2);
		}
		else {
			cycle3(1);
		}
	}
	if (cl3 == 2) {
		cout << "___________________________________________\nYou opened the bottom drawer... it's empty\nLeave 1" << endl;
		cin >> y;
	}
	if (y == 1) {
		cycle3(1);
	}
}