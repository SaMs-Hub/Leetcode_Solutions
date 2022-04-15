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


Node* buildArrayTree(int *arr, int s, int e){
	// base case, if s > e then return NULL
	// else, findOut mid of arr, then create a node using mid
	// call similary on rootLeft by e as mid - 1, and for right s as mid + 1
	// return root

	if (s > e){
		return NULL;
	}

	int mid = (s + e)/2;
	Node* root = new Node(int(arr[mid]));

	root->left = buildArrayTree(arr, s, mid - 1);
	root->right = buildArrayTree(arr, mid + 1, e);

	return root;
}


int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7};
	int n = sizeof(arr)/sizeof(arr[0]);


	Node* root = buildArrayTree(arr, 0, n - 1);
	bfs(root);


	
}
