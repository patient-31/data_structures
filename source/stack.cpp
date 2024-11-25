/*
 * ________________________________________________________________________________
 * |  File: stack.cpp
 * |  Project: patient
 * |  File Created: Monday, 25th November 2024 09:53 am
 * |  Author: Daniel Haddington [haddingtondaniel5@icloud.com]
 */
# include <iostream>
# include <stack>
using namespace std;


void printStackElements(stack<int> s)
{
	while (!s.empty())
	{
		cout << s.top() << endl;
		s.pop();
	}
}

int main()
{
	stack<int>numbersStack;

	numbersStack.push(1);
	numbersStack.push(2);
	numbersStack.push(3);
	numbersStack.pop();

	if (numbersStack.empty())
		cout << "stack is empty" << endl;
	else
		cout << "stack is not empty" << endl;
	cout << "stack size is " << numbersStack.size() << endl;
	
	printStackElements(numbersStack);
	printStackElements(numbersStack);
}