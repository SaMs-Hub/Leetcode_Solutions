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

int largestData(Node *root){
	if (root == NULL){
		return -1;
	}

	int leftLargest = largestData(root->left);
	int rightLargest = largestData(root->right);


	int maximum = max(max(root->data, leftLargest), rightLargest);
	return maximum;
}

int smallestData(Node *root){
	if (root == NULL){
		return -1;
	}

	int leftsmallest = smallestData(root->left);
	int rightsmallest = smallestData(root->right);

	int minimum =   min(min(root->data, leftsmallest), rightsmallest);
	return minimum;
}


int main()
{

	Node* root = buildTree();


	cout <<largestData(root) << endl;
	cout << smallestData(root) << endl;
	
	return 0;
}
