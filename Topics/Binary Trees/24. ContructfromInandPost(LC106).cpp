// App 1 - Rec
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
    TreeNode* constructTreeUtil(vector<int> &postorder, int &postorderIndex, vector<int> &inorder, int inorderStart, int inorderEnd) {
	if (inorderStart > inorderEnd) {
		return NULL;
	}
	TreeNode* currNode = new TreeNode(postorder[postorderIndex]);
	postorderIndex--;
	if (inorderStart == inorderEnd) {
		return currNode;
	}
	int currInorderIndex = - 1;
	for (int i = inorderStart; i <= inorderEnd; i++) {
		if(inorder[i] == currNode->val) {
			currInorderIndex = i;
			break;
		}
	}
	currNode->right = constructTreeUtil(postorder, postorderIndex, inorder, currInorderIndex + 1, inorderEnd);
	currNode->left = constructTreeUtil(postorder, postorderIndex, inorder, inorderStart, currInorderIndex - 1);
	return currNode;
}
TreeNode* buildTree(vector<int> &inorder, vector<int> &postorder) {
	int postorderIndex = postorder.size() - 1;
    return constructTreeUtil(postorder, postorderIndex, inorder, 0, inorder.size() - 1);
}
};
