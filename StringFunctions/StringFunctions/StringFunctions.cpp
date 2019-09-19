// StringFunctions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string username = "";
	cout << "Please enter your name:" << endl;
	cin >> username;

	cout << "Your name's length is: " << username.length() << endl;

	if (username.find('a'))
		cout << "Your name contains 'a' letter" << endl;
	else
		cout << "Your name does not contain 'a' letter" << endl;

	cout << "Last 2 characters of your name are: " << username.substr(username.length() - 2) << endl;

	return 0;

}
