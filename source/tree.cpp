/*
 * ________________________________________________________________________________
 * |  File: tree.cpp
 * |  Project: patient
 * |  File Created: Monday, 25th November 2024 03:14 pm
 * |  Author: Daniel Haddington [haddingtondaniel5@icloud.com]
 */
# include <iostream>
using namespace std;

struct Node {
	int data;
	Node *left;
	Node *right;
};

Node *createNode(int data) {
	Node *newNode = new Node();
	newNode->data = data;
	newNode->left = newNode->right = nullptr;
	return newNode;
}

void printTreePreOrder(Node *root)
{
	if (root == nullptr) return ;

	cout << root->data << ", ";
	printTreePreOrder(root->left);
	printTreePreOrder(root->right);
}

void printTreeInOrder(Node *root)
{
	if (root == nullptr) return ;
	printTreeInOrder(root->left);
	cout << root->data << ", ";
	printTreeInOrder(root->right);
}

void printTreePostOrder(Node *root)
{
	if (root == nullptr) return ;

	printTreePostOrder(root->left);
	printTreePostOrder(root->right);
	cout << root->data << ", ";
}

int main ()
{
    // Level 1
    Node *root = createNode(1);
    
    // Level 2
    root->left = createNode(2);
    root->right = createNode(3);
    
    // Level 3
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);
    
    // Level 4
    root->left->left->left = createNode(8);
    root->left->left->right = createNode(9);
    root->left->right->left = createNode(10);
    root->left->right->right = createNode(11);
    root->right->left->left = createNode(12);
    root->right->left->right = createNode(13);
    root->right->right->left = createNode(14);
    root->right->right->right = createNode(15);
    
    // Level 5
    root->left->left->left->left = createNode(16);
    root->left->left->left->right = createNode(17);
    root->left->left->right->left = createNode(18);
    root->left->left->right->right = createNode(19);
    root->left->right->left->left = createNode(20);
    root->left->right->left->right = createNode(21);
    root->left->right->right->left = createNode(22);
    root->left->right->right->right = createNode(23);
    
    root->right->left->left->left = createNode(24);
    root->right->left->left->right = createNode(25);
    root->right->left->right->left = createNode(26);
    root->right->left->right->right = createNode(27);
    root->right->right->left->left = createNode(28);
    root->right->right->left->right = createNode(29);
    root->right->right->right->left = createNode(30);
    root->right->right->right->right = createNode(31);
	
	printTreePreOrder(root);
	cout << endl;
	printTreeInOrder(root);
	cout << endl;
	printTreePostOrder(root);
	cout << endl;
	return (0);
}