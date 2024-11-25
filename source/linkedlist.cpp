/*
 * ________________________________________________________________________________
 * |  File: linkedlist.cpp
 * |  Project: patient
 * |  File Created: Monday, 25th November 2024 08:58 am
 * |  Author: Daniel Haddington [haddingtondaniel5@icloud.com]
 */
# include <iostream>
using namespace std;

class Node
{
public:
	int Value;
	Node *Next;
};

void printList(Node *node)
{
	while (node)
	{
		cout << node->Value << endl;
		node = node->Next;
	}
}

void insertAtTheFront(Node **head, int newValue)
{
	//1 Prepare a new node
	Node *newNode = new Node();
	newNode->Value = newValue;
	//2 put it infront of the current head
	newNode->Next = *head;
	//3 move head of the list to point to the newnode
	*head = newNode;
}

void insertAtTheEnd(Node **head, int newValue)
{
	//1 Prepare a new node
	Node *newNode = new Node();
	newNode->Value = newValue;
	newNode->Next = NULL;
	//2 If linked list is empty, newNode will be a head node
	if (*head == NULL)
	{
		*head = newNode;
		return ;
	}
	//3 find the last node
	Node *last = *head;
	while (last->Next)
	{
		last = last->Next;
	}
	//4 insert newnode after last node
	last->Next = newNode;
}

void insertAfter(Node *previous, int newValue)
{
	//1 Check if previous node is NULL
	if (previous == NULL)
	{
		cout << "Previous cannot be NULL";
		return ;
	}
	//2 Prepare a newNode
	Node *newNode = new Node();
	newNode->Value = newValue;
	//3 Insert newNode after previous
	newNode->Next = previous->Next;
	previous->Next = newNode;
}

int main()
{
	Node *head = new Node();
	Node *second = new Node();
	Node *third = new Node();

	head->Value = 1;
	head->Next = second;
	second->Value = 2;
	second->Next = third;
	third->Value = 3;
	third->Next = (NULL);


	insertAfter(second, 0);

	printList(head);


	return (0);
}