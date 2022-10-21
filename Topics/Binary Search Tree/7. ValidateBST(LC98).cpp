// App 1 O(n)

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
    bool bst(TreeNode* root, TreeNode* &prev){
    if (!root) return true;

    if (!bst(root->left, prev)) return false;

    if (prev && prev->val >= root->val) return false;

    prev = root;
            if (!bst(root->right, prev)) return false;

    return true;
}


 bool isValidBST(TreeNode* root) {
    TreeNode* prev = NULL;
    return bst(root, prev);
        
    }

};
