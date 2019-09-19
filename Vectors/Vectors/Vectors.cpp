// Vectors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> vi;
	for (int i = 0; i < 10; i++)
	{
		vi.push_back(i);
	}

	for (auto item:vi)
	{
		cout << item << endl;
	}

	vector<string> vs;

	cout << "Please enter three words:" << endl;

	for (int i = 0; i < 3; i++)
	{
		string s;
		cin >> s;
		vs.push_back(s);
	}

	for (auto item : vs) {
		cout << item << endl;
	}

}