// App 1 - BF

#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node (int data){
        this->data = data;
        next = NULL;
    }
};

Node* takeInput(){
    int data;
    cin >> data;

    Node* head = NULL;
    Node* tail = NULL;

    while (data != -1){
        Node* newNode = new Node(data);
        if (head == NULL){
            head = newNode;
            tail = newNode;
        }else{
            tail->next = newNode;
            tail = tail->next;

        }
        cin >> data;

    }
    return head;
}

void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }

}

Node* findKthNode(Node* head, int key){
    int count = 0;
    Node* currentNode = head;

    while (currentNode != NULL){
        count += 1;
        currentNode = currentNode->next;
    }

    key = count - key;

    currentNode = head;
    int i = 0;
    while (i < key){
        i += 1;
        currentNode = currentNode->next;
    }

    cout << currentNode->data << endl;
    return currentNode;
}
int main()
{
    Node* head = takeInput();
    print(head);

    cout << endl;
    findKthNode(head, 2);
  
   
    return 0;
}


// App 2 - Recursive
int nthLast(Node* head, int key){
    int index = 0;
    if (!head) return -1;
    
index = nthLast(head->next, key) + 1;

    if (index == key){
        cout << head->data;
    }
}
