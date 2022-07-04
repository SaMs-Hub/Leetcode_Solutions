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

// for inorder traversal
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

int main(){
    Node* root = buildTree();
    inOrderTraversal(root);
}
