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

int height(Node* root){
	if (root == NULL){
		return 0;
	}

	int ls = height(root->left);
	int rs = height(root->right);

	return max(ls, rs) + 1;
}

void printKthLevel(Node *root, int k){
	if (root == NULL){
		return;
	}

	if (k == 1){
		cout << root->data<< " ";
		return;
	}

	printKthLevel(root->left, k - 1);
	printKthLevel(root->right, k - 1);

	return;
}



void printAllLevels(Node* root){
	int H = height(root);

	for (int i = 1; i <= H; i++){
		printKthLevel(root, i);
		cout << endl;
	}


}

Node* removeLeaves(Node *root){
	if (root == NULL){
		return NULL;
	}

	if ((root->left) == NULL and (root->right == NULL)){
		return NULL;
	}

	root->left = removeLeaves(root->left);
	root->right = removeLeaves(root->right);

	return root;

}


int main()
{

	Node* root = buildTree();
	printAllLevels(root);
	removeLeaves(root);

	printAllLevels(root);
	return 0;
}
