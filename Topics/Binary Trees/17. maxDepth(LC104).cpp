// App 1 - BFS Queue Time Complexity: O(n) Auxiliary Space Complexity: O(n)
int maxDepth(TreeNode* root){
    if (root == NULL){
        return 0;
    }
    queue<TreeNode*> q;
    q.push(root);

    int depth = 0;
    while (!q.empty()){
        depth += 1;
        int currentLevelNodes = q.size();

        while (currentLevelNodes > 0){
            TreeNode* currentNode = q.front();
            q.pop();

            if (currentNode->left != NULL){
                q.push(currentNode->left);
            }

            if (currentNode->right != NULL){
                q.push(currentNode->right);
            }

            currentLevelNodes -= 1;
        }
        
    }
    return depth;

}


// App 2 DFS Recursive  Time Complexity: O(n) Auxiliary Space Complexity: O(1)
int maxDepth(TreeNode* root){
    if (root == NULL){
        return 0;
    }

    int leftNode = maxDepth(root->left);
    int rightNode = maxDepth(root->right);

    return max(leftNode, rightNode) + 1;

}
