// GuessMyNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	srand(time(0));
	cout << "Guess My Number!\n";
	int mynumber = (rand() % 10) + 1, guessednumber = -1;
	bool keepgoing = true;
	while (keepgoing) {
		cout << "Please enter your guess between 0 and 10:" << endl;
		cin >> guessednumber;

		if (mynumber > guessednumber) {
			cout << "Too low" << endl;
		}
		else if (mynumber < guessednumber) {
			cout << "Too high" << endl;
		}
		else if (mynumber == guessednumber) {
			cout << "You found my number exiting!!!" << endl;
			keepgoing = false;
		}
	}
}
