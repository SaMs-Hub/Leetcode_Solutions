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


int sumNodes(Node* root){
	// base case - if root null
	if (root == NULL){
		return 0;
	}

	// return calc 
	return root->data + sumNodes(root->left) + sumNodes(root->right);
}
int main()
{
	Node *root = buildTree();
	cout << sumNodes(root);


	
	return 0;
}
