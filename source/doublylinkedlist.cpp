/*
 * ________________________________________________________________________________
 * |  File: doublylinkedlist.cpp
 * |  Project: patient
 * |  File Created: Monday, 25th November 2024 02:51 pm
 * |  Author: Daniel Haddington [haddingtondaniel5@icloud.com]
 */

#include <iostream>

using namespace std;

class Node {
public:
	int value;
	Node *next;
	Node *previous;
};

void printForwards (Node *head)
{
	Node *traverser = head;
	while (traverser)
	{
		cout << traverser->value << endl;
		traverser = traverser->next;
	}
}
void printBackwards (Node *tail)
{
	Node *traverser = tail;
	while (traverser)
	{
		cout << traverser->value << endl;
		traverser = traverser->previous;
	}
}

int main ()
{
	Node *head;
	Node *tail;


	// add 1st node
	Node* node = new Node();
	node->value = 4;
	node->next = nullptr;
	node->previous = nullptr;
	head = node;
	tail = node;

	// add 2nd node
	node = new Node();
	node->value = 5;
	node->next = nullptr;
	node->previous = tail;
	tail->next = node;
	tail = node;

	// add 3rd node
	node = new Node();
	node->value = 6;
	node->next = nullptr;
	node->previous = tail;
	tail->next = node;
	tail = node;


	printBackwards(tail);
	printForwards(head);
	return (0);
}