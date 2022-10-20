// Approach 1
/// TC - O(n2)
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

void printNode(Node* root){
	if (root == NULL){
		return;
	}

	cout << root->data << " ";

	printNode(root->left);
	printNode(root->right);
}

int height(Node* root){
	if (root == 0){
		return 0;
	}

	int ls = height(root->left);
	int rs = height(root->right);

	return max(ls, rs) + 1;
}

int diameter(Node* root){
	if (root == NULL){
		return 0;
	}

	int LH = height(root->left);
	int RH = height(root->right);

	int option1 = LH + RH;
	int option2 = diameter(root->left);
	int option3 = diameter(root->right);

	return max(option1, max(option2, option3));


}


int main()
{
	Node *root = buildup();
	cout << diameter(root);


	
	return 0;
}


// Approach 2
/// TC - O(n)
class Pair
{
public:
	int height;
	int diameter;
};

Pair betterDiameterApproach(Node *root)
{
	Pair p;
	if (root == NULL)
	{
		p.diameter = 0;
		p.height = 0;
		return p;
	}

	Pair left = betterDiameterApproach(root->left);
	Pair right = betterDiameterApproach(root->right);

	p.height = max(left.height, right.height) + 1;
	p.diameter = max(left.height + right.height, max(left.diameter, right.diameter));

	return p;
}

int main()
{
	Node *root = buildup();
	Pair p = betterDiameterApproach(root);

	cout << p.height << endl;
	cout << p.diameter << endl;

	return 0;
}

