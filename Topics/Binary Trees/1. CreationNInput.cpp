#include <bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node* left;
		Node* right;

		Node(int data){
			this->data = data;
			left = NULL;
			right = NULL;
		}
};

Node* buildTree(){
	// take user data
	int data;
	cin >> data;

	// if data is -1, then count as NULL
	if (data == -1){
		return NULL;
	}

	// store the data in object 
	Node* root = new Node(data);

	// call same for left and right Nodes
	root->left = buildTree();
	root->right = buildTree();
}

void print(Node* root){
	// return if root is Null
	if (root == NULL){
		return;
	}

	// print rootData
	cout << root->data << " ";

	// call on left and right
	print(root->left);
	print(root->right);
}


int main()
{

	Node* root = buildTree();
	print(root);
	return 0;
}
