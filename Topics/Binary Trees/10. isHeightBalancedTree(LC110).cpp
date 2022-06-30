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
	// take user data
	// if data is -1, return null
	// else create root object,
	// similarly call on left and rightNode
	// return root

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

void bfs(Node *root)
{
	// create a queue and push data to it
	// also push null for next line
	// while q is not empty, make a node having firstelement
	// if its null, go to next line, and pop it
	// if still q not empty add null to it
	// else print fData and pop it
	// similaryly if having data for left and right push them too
	// return;

	queue<Node *> q;
	q.push(root);
	q.push(NULL);

	while (!q.empty())
	{
		Node *f = q.front();

		if (f == NULL)
		{
			cout << endl;
			q.pop();
			if (!q.empty())
			{
				q.push(NULL);
			}
		}
		else
		{
			cout << f->data << ',';
			q.pop();

			if (f->left)
			{
				q.push(f->left);
			}

			if (f->right)
			{
				q.push(f->right);
			}
		}
	}

	return;
}

class Pair{
	public:
		int height;
		bool balanced;
};

Pair isBalanced(Node* root){
	// Create a pair to store height and balance
	// if root is null, height is 0 and balance is true, return p;
	// else, create two more pairs with left and rightNode
	// get the height by max of both and root add 1
	// if abs leftHeight - rightHeight is <= 1 and leftBalanced and rightBalanced is true return true return p

	Pair p;
	if (root == NULL){
		p.height = 0;
		p.balanced = true;
		return p;
	}

	Pair leftTree = isBalanced(root->left);
	Pair rightTree = isBalanced(root->right);

	p.height = max(leftTree.height, rightTree.height) + 1;

	if (abs(leftTree.height  - rightTree.height ) <= 1 && leftTree.balanced && rightTree.balanced){
		p.balanced = true;
	}else{
		p.balanced = false;
	}

	return p;
}


int main()
{
	Node *root = buildTree();
	bfs(root);


	// condition is the diff between left height and right height should be <= 1
	if (isBalanced(root).balanced){
		cout << "Balanced";
	}else{
		cout << "Not";
	}
	return 0;
}
