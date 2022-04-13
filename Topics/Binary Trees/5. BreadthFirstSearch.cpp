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



int main()
{

	Node* root = buildTree();

	bfs(root);
	
	return 0;
}
