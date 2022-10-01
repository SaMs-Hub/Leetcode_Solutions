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

Node* insertAtBST(Node* root, int data){
    // base case - if root is null, then return by creating rootData
    // rec case if data is <= rootData insert at rootLeft
    // else insert at rootRight

    if (root == NULL){
        return new Node(data);
    }

    if (data <= root->data){
        root->left = insertAtBST(root->left, data);
    }else{
        root->right =  insertAtBST(root->right, data);
    }

    return root;
}


Node* buildTree(){
    // take data from user, create root with nulluntil data is not -1,  by taking input
    // call insertInBST(root, data) with given 
    // return
    int data;
    cin >> data;

    Node* root = NULL;
    while (data != -1){
        root = insertAtBST(root, data);
        cin >> data;
    }

    return root;
}

void inOrderTraversal(Node* root){
    // if root is null return;
    // else call on rootLeft, printRootData, call on rootRight
    if (root == NULL){
        return;
    }

    inOrderTraversal(root->left);
    cout << root->data << ",";
    inOrderTraversal(root->right);
}

bool isTreeBST(Node* root, int minV = INT_MIN, int maxV = INT_MAX){
    // if root is null, return true
    // else if root is >= minV and <= maxV and isTreeBST(eootLeft, minV, rootData) and isTreeBT(root->rigt, rootDa) return true
    // else return false

    if (root == NULL){
        return true;
    }

    if (root->data >= minV and root->data <= maxV and isTreeBST(root->left, minV, root->data) and isTreeBST(root->right, root->data, maxV)){
        return true;
    }

    return false;
    
}


int main()
{
    Node* root = buildTree();
    inOrderTraversal(root);
    cout << endl;

    cout << isTreeBST(root);
    
}
