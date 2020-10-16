#include "BinaryTree.h"

int max(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int arr[] = { 4, 5, 2, 7, 3, 1, 6, 7, 7, 5};

BinaryTree::BinaryTree()
{
	root = 0;
}

BinaryTree::BinaryTree(int t)
{
	root = 0;
	for (int i = 0; i < t; i++)
	{
		Push(root, arr[i]);
	}
}
BinaryTree::~BinaryTree()
{
	DelTree(root);
}

void BinaryTree::DelTree(Node* wer)
{
	if (wer->left)
	{
		DelTree(wer->left);
	}
	if (wer->right)
	{
		DelTree(wer->right);
	}
	delete wer;
}

void BinaryTree::Push(Node*& wer, double t)
{
	if (wer == 0)
	{
		wer = new Node;
		wer->n = t;
		wer->left = 0;
		wer->right = 0;
		wer->count = 1;
	}
	else
	{
		if (t < wer->n)
		{
			Push(wer->left, t);
		}
		else
		{
			if (t > wer->n)
			{
				Push(wer->right, t);
			}
			else
			{
				wer->count++;
			}
		}
	}
}

void BinaryTree::Look(Node* wer)
{
	if (wer)
	{
		Look(wer->left);
		cout << "Quantity: " << wer->n << " - " << wer->count << " times." << endl;
		Look(wer->right);
	}
}

int BinaryTree::maxCount(Node* wer)
{
	int max;
	while (wer->right)
	{
		max = wer->count;
		wer = wer->right;
	}
	max = wer->count;
	return max;
}

int BinaryTree::Height(Node* wer)
{
	int h = 0, l, r;
	if (wer != 0)
	{
		l = Height(wer->left);
		r = Height(wer->right);
		h = max(l, r) + 1;
	}
	return h;
}
