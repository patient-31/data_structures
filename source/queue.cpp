/*
 * ________________________________________________________________________________
 * |  File: queue.cpp
 * |  Project: patient
 * |  File Created: Monday, 25th November 2024 10:08 am
 * |  Author: Daniel Haddington [haddingtondaniel5@icloud.com]
 */
#include <iostream>
#include <queue>
using namespace std;

void printQueue(queue<int> queue)
{
	while (!queue.empty())
	{
		cout << queue.front() << "  ";
		queue.pop();
	}
	cout << endl;
}

int main()
{
	queue<int> myQueue;
	myQueue.push(1);
	myQueue.push(2);
	myQueue.push(3);

	cout << "Size is " << myQueue.size() << endl;
	cout << "First element is " << myQueue.front() << endl;
	cout << "Last element is " << myQueue.back() << endl;

	cout << "My queue: " << endl;
	printQueue(myQueue);
	return (0);
}