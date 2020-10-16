#include <ctime>
#include <cstdlib>
#include <iostream>
#pragma once

using namespace std;

struct Node
{
	double n;
	int count;
	Node* left;
	Node* right;
};

class BinaryTree
{
public:
	Node* root;
	BinaryTree();
	BinaryTree(int);
	~BinaryTree();
	void DelTree(Node*);
	void Push(Node*&, double);
	void Look(Node*);
	int maxCount(Node*);
	int Height(Node*);
};

