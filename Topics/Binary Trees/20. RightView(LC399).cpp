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
    vector<int> rightSideView(TreeNode* root){
	queue<TreeNode*> q;
	q.push(root);
    if (root == NULL){
        return {};
    }
	vector<int> result;

	while (!q.empty()){
		int n = q.size();
		for (int i = 0;i < n; i++){
			TreeNode* currentNode = q.front();
			q.pop();

			if (i == 0){
				result.push_back(currentNode->val);
			}

			if (currentNode->right) q.push(currentNode->right);
			if (currentNode->left) q.push(currentNode->left);

		}
	}
	return result;
}

};
