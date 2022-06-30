/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* prevNode;

void getFlat(TreeNode* root){
	if (root == NULL) return;
	
	getFlat(root->right);
	getFlat(root->left);
	
	root->right = prevNode;
	root->left = NULL;
	prevNode = root;
}
void flatten(TreeNode* root) {
    prevNode = NULL;
	getFlat(root);
	
}


};
