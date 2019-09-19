// Strings.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;
int main()
{
	string myname{};
	cout << "Please enter your name" << endl;
	cin >> myname;

	string greetings = "Hello " + myname;

	if (myname == "Ahmet") {
		greetings += ", I know you!";
	}
	cout << greetings;

}
