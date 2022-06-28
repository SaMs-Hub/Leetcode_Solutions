// App 1 - brute force
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


// App 2 - Using 2D vector & queue
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode *> queue;
    queue.push(root);

    vector<vector<int>> res;
        if(!root) return res;
    while (!queue.empty())
    {

        int size = queue.size();
        vector<int> ans;
        while (size--)
        {
            TreeNode *currentTreeNode = queue.front();
            queue.pop();

            ans.push_back(currentTreeNode->val);
            if (currentTreeNode->left != NULL)
            {
                queue.push(currentTreeNode->left);
            }

            if (currentTreeNode->right != NULL)
            {
                queue.push(currentTreeNode->right);
            }
        }
        res.push_back(ans);
    }
    return res;
        
    }
};
