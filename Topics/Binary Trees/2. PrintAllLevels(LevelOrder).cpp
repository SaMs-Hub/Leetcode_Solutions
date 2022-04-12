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


int main()
{

	Node* root = buildTree();
	printAllLevels(root);
	return 0;
}
