#include<iostream>
#include<string>
using namespace std;

class Node 
{
public:
	string info;
	Node* leftchild;
	Node* rightchild;

	//constructor for the Node class
	Node(string i, Node* I, Node* r)
	{
		info = i;
		leftchild = I;
		rightchild = r;
	}
};

class BinaryTree
{
public:
	Node* ROOT;

	BinaryTree()
	{
		ROOT = NULL;		//initiazlizing ROOT to NULL
	}
};