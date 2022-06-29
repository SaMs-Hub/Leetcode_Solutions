// App 1 - BFS Queue TC - O(n), SC - O(n)

bool isSymmetric(TreeNode* root){
    // pushing root twice in queue
    queue<TreeNode* > q;
    q.push(root);
    q.push(root);

    while  (!q.empty()){
        // get left and right child and pop them from q;
        TreeNode* leftChild = q.front();
        q.pop();

        TreeNode* rightChild = q.front();
        q.pop();

        // return false if their data not equal
        if (leftChild->data != rightChild->data){
            return false;
        }

        // similaryly check for leftRight and rightLeft elements
        if (leftChild->left != NULL and rightChild->right != NULL){
            q.push(leftChild->left);
            q.push(rightChild->right);
        }else if (leftChild->left != NULL or  rightChild->right != NULL){
            return false;
        }

        if (leftChild->right != NULL and rightChild->left != NULL){
            q.push(leftChild->right);
            q.push(rightChild->left);
        }else if (leftChild->right != NULL or  rightChild->left != NULL){
            return false;
        }


    }
    return true;
}



// App 2 - DFS - Recursive Time Complexity: O(n) Auxiliary Space Complexity: O(1)

bool isMirror(TreeNode* root1, TreeNode* root2){
    // base case 
    if (root1 == NULL and root2 == NULL){
        return true;
    }

    if (root1 == NULL or root2 == NULL){
        return false;
    }

    if (root1->data != root2->data){
        return false;
    }


    // recursive calls
    if (isMirror(root1->left, root2->right) == false or isMirror(root1->right, root2->left) == false){
        return false;
    }

    return true;
}

bool isSymmetric(TreeNode* root){
    // pushing root twice
    return isMirror(root, root);
}
