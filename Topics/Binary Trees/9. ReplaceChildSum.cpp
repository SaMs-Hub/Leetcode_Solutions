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

Node *buildup()
{
	int data;
	cin >> data;

	if (data == -1)
	{
		return NULL;
	}

	Node *root = new Node(data);

	root->left = buildup();
	root->right = buildup();

	return root;
}

void bfs(Node *root){
	queue<Node*> q;
	q.push(root);
	q.push(NULL);

	while (!q.empty()){
		Node* f = q.front();

		if (f == NULL){
			cout << endl;
			q.pop();

			if (!q.empty()){
				q.push(NULL);
			}


		}else{
			cout << f->data << ',';
			q.pop();

			if (f->left){
				q.push(f->left);
			}
			if (f->right){
				q.push(f->right);
			}
		}
	}


	return;
}


int replaceSum(Node* root){
	if (root == NULL){
		return 0;
	}

	if ((root->left == NULL) && (root->right == NULL)){
		return root->data;
	}

	int leftSum = replaceSum(root->left);
	int rightSum = replaceSum(root->right);

	int temp = root->data;
	root->data = leftSum + rightSum;

	return temp + root->data;
}

Node* replaceNodes(Node *root){
	if (root == NULL){
		return NULL;
	}

	
}

int main()
{
	Node *root = buildup();
	bfs(root);

	cout << endl;
	replaceSum(root);
	bfs(root);

	return 0;
}
