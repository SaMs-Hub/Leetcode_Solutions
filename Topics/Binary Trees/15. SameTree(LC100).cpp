// App 1 - Brute Force BFS
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
    bool isSameTree(TreeNode* R1, TreeNode* R2) {
        queue<TreeNode *> tree1, tree2;
    tree1.push(R1);
    tree2.push(R2);

    while (!tree1.empty() && !tree2.empty())
    {
        TreeNode *currentNode1 = tree1.front();
         tree1.pop();
        TreeNode *currentNode2 = tree2.front();
        tree2.pop();
        
        if (currentNode1==NULL && currentNode2== NULL) continue;
              if (currentNode1==NULL || currentNode2 ==NULL) return false;

        if (currentNode1->val != currentNode2->val)
        {
            return false;
        }
            tree1.push(currentNode1->left);
        
            tree1.push(currentNode1->right);
       
            tree2.push(currentNode2->left);
        
            tree2.push(currentNode2->right);
        
    }
    if (!tree1.empty() or !tree2.empty())
    {
        return false;
    }
    return true;
        
    }
};


// App 2 - Recursive DFS
bool isSameTree(TreeNode* root1, TreeNode* root2) {
        // base cases
        if (root1 == NULL and root2 == NULL){
        return true;
    }

    if (root1 == NULL or root2 == NULL){
        return false;
    }

    if (root1->val != root2->val){
        return false;
    }

    // rec call
    if (isSameTree(root1->left, root2->left) == false or isSameTree(root1->right, root2->right) == false) {
        return false;
    }
    return true;
    }
};
