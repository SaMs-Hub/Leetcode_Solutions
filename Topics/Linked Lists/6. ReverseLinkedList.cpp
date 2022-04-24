// Approach 1 - BruteForce
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

Node *takeInput()
{
    // while user gives -1 as data keep taking input
    // make a newnode, and assign head and tail as null
    // if head null, assign nweNode to head and tail
    // else, put newNode in tailNext and tailNext in tail
    // else keep taking data
    // return head
    int data;
    cin >> data;

    Node *head = NULL;
    Node *tail = NULL;
    while (data != -1)
    {
        Node *newNode = new Node(data);

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

void print(Node *head)
{
    // till head is not null, keep printing head->data and put head->next value in head
    int count = 0;
    while(head != NULL){
        head-> next != NULL ? cout << head->data << "->" : cout << head->data;
        head = head->next;
        count++;
    }
  
}

void reverseLL(Node* &head){
    // make a currentNode pointing head, previous as null, and nextNode
    // while current is not NULL, store currentNExt data in next, set previous in currentNext, 
    // and store current in previous and next in current
    // set previous as head

    Node* current = head;
    Node* previous = NULL;
    Node* nextNode;

    while (current != NULL){
        nextNode = current->next;

        current->next = previous;

        previous = current;
        current = nextNode;
        
    }

    head = previous;

}


int main()
{
    Node *head = takeInput();
    print(head);
    cout << endl;
    reverseLL(head);
    print(head);
    

    return 0;
}


// Approach 2.1 Recusion TC - O(n2)
Node* reverseLL(Node* head){
    // base case - if head is NULL or headNext is NULL return head;
    // rec Case - store sHead in head->next;
    // store sHead in temp, while tempNext != NULL store tempNext as temp
    // headNext as NULL, tempNExt as head return shead

    if (head == NULL or head->next == NULL){
        return head;
    }

    Node* sHead = reverseLL(head->next);
    Node* temp = sHead;
    while (temp->next != NULL){
        temp = temp->next;
    }

    head->next = NULL;
    temp->next = head;
    return sHead;


}

// Approach 2.2 Recursion TC - 
Node* reverseLL(Node* head){
    // base case - if head is NULL or headNext is NULL return head;
    // rec Case - store sHead in head->next;
    // store head in headNExt -> next and head->next = NULL
   

    if (head == NULL or head->next == NULL){
        return head;
    }

    Node* sHead = reverseLL(head->next);
 
    head->next->next = head;
    head->next = NULL;
    
    return sHead;


}
