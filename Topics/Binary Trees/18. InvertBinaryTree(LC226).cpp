// App 1 - BFS - O(n), O(n)
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        if (root == NULL){
            return root;
        }
        
        while (!q.empty()){
            TreeNode* currentNode = q.front();
            q.pop();
            
            swap(currentNode->left, currentNode->right);
            if (currentNode->left) q.push(currentNode->left);
            if (currentNode->right) q.push(currentNode->right);
        }
        
        return root;
    }
};


// App 2 - DFS - O(n), O(1)

TreeNode* invertTree(TreeNode* root) {
        if (root == NULL){
            return root;
        }
        
        TreeNode* leftTree = invertTree(root->left);
        TreeNode* rightTree = invertTree(root->right);
        
        root->left = rightTree;
        root->right = leftTree;
        
        return root;
    }
