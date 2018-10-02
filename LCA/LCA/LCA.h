#pragma once

// A Binary Tree node 
struct Node
{
	int key;
	struct Node *left, *right;
};

Node * newNode(int k);

int findLCA(Node *root, int n1, int n2);