#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
	int data;
	Node *left;
	Node *right;

	Node(int data)
	{
		this->data = data;
		left = NULL;
		right = NULL;
	}
};

Node *buildTree()
{
	int data;
	cin >> data;

	if (data == -1)
	{
		return NULL;
	}

	Node *root = new Node(data);

	root->left = buildTree();
	root->right = buildTree();

	return root;
}


int countNodes(Node* root){
	// base case
	if (root == NULL){
		return 0;
	}

	// return calc 1 for root
	return 1 + countNodes(root->left) + countNodes(root->right);
}
int main()
{
	Node *root = buildTree();
	cout << countNodes(root);


	
	return 0;
}
