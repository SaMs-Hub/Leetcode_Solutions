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


Node* deleteNode(Node* root, int data){
    // base case if root is null return null
    // else if data is <= rootData return rootLeft deelete
    // eslse return root right delete
    // else if rootData is data
    /// case 1 - rootWith 0 child
    /// if rootLeft null and rootRigt Null delte root return null
    /// case 2 - 1 child
    /// if one of node is not null , strore it in temp val delete root, return temp
    /// case 3 - 2 child
    /// store rightNde in replace, while  leftRoot is not empty add replaceLeft to replace
    /// store replaceData in rootData , call function using deletNode(rootRight, replaceData)
    /// return root

    if (root == NULL){
        return NULL;
    }

    else if (data < root->data){
        root->left = deleteNode(root->left, data);
        return root;
    }
    else if (data == root->data){
        if (root->left == NULL and root->right == NULL){
            delete root;
            return NULL;
        }

        if (root->left != NULL and root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }

        if (root->right != NULL and root->left == NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }

        Node* replace = root->right;
        while (root->left != NULL){
            replace = replace->left;
        }

        root->data = replace->data;
        root->right = deleteNode(root->right, replace->data);
        return root;

    }
    else{
        root->right = deleteNode(root->right, data);
        return root;
    }
}

int main()
{
    Node* root = buildTree();
    inOrderTraversal(root);
    cout << endl;
    root = deleteNode(root, 3);
    inOrderTraversal(root);
}
