#pragma once
 
struct Node
{
	int key;
	struct Node *left, *right;
};

Node * newNode(int k);

int findLCA(Node *root, int n1, int n2);


bool findPath(Node *root, std::vector<int> &path, int k);


Node * newNode(int k);
