#include <iostream>
using namespace std;
void cycle1(int cycle1);
void cycle2(int cycle2);
void cycle3(int cycle3);
void escape(int esc);
void door1(int door1) {
	if (door1 == 1) {
		cout << "___________________________________________\nI can't open this door..." << endl;
		cycle1(1);
	}
}
void door2(int doo2) {
	cout << "___________________________________________\nI can't open this door..." << endl;
	cycle2(1);
}
void door3(int doo3) {
	if (doo3 == 1) {
		cout << "___________________________________________\nYou inserted the key into the lock and turned... the lock opened and fell to the floor with a clang of metal..." << endl;
		escape(1);
	}
}