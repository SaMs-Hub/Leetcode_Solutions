// App 1 - Recursion O(n)

class Solution {
public:
    void helper(TreeNode* root, vector<vector<int>> &res, int level){
        if (!root) return;
        if (level >= res.size()) res.push_back({});
        
        res[level].push_back(root->val);
        helper(root->left, res, level + 1);
        helper(root->right, res, level + 1);
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if (!root) return res;
        helper(root, res, 0);
        for (int i = 1; i < res.size(); i = i + 2) reverse(res[i].begin(), res[i].end());
        return res;
    }
};

// App 2- Queue BFS O(n)
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if (!root) return res;
        queue<TreeNode*> q;
        vector<int> row;
        int level = 0;
        q.push(root);
        
        while (!q.empty()){
            int n = q.size();
            for (int i = 0; i < n; i++){
                TreeNode* root = q.front();
                q.pop();
                
                row.push_back(root->val);
                if(root->left) q.push(root->left);
                if(root->right) q.push(root->right);
            }
            
            if (level % 2 == 0) res.push_back(row);
            else {
                reverse(row.begin(), row.end());
                res.push_back(row);
            }
            
            
            row.clear();
            level += 1;
        }
        
        
        
        return res;
        
    }
};

