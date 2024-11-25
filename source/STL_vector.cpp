/*
 * ________________________________________________________________________________
 * |  File: STL_Vector.cpp
 * |  Project: patient
 * |  File Created: Monday, 25th November 2024 04:00 pm
 * |  Author: Daniel Haddington [haddingtondaniel5@icloud.com]
 */

#include <iostream>
#include <vector>
using namespace std;

int main ()
{
	vector<int> numbers;
	numbers.push_back(0);

	for (int i = 1; i <= 10; i++)
	{
		numbers.push_back(i);
	}

	for (auto iterator = numbers.cbegin(); iterator != numbers.cend(); iterator++) // cend and cbegin are constant
	{
		// cout << iterator << endl;
		cout << *iterator << endl;
		cout << &iterator << endl;
		cout << &(*iterator) << endl;
	}

		for (auto iterator = numbers.begin(); iterator != numbers.end(); iterator++)
	{
		*iterator = 20;
		cout << *iterator << endl;
	}
	return (0);

	// gave up, come back
}
