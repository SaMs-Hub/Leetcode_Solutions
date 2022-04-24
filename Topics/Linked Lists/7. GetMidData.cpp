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

Node* getMid(Node* head){
    // if head is NULL or headNExt is NULL, return head
    // else, take two vars fast and slow
    // while (fastNext and fastNext->next is not NULL) do jump fast by two and slow by 1
    // return slow

    if (head == NULL or head->next == NULL){
        return head;
    }

    Node* fast = head->next;
    Node* slow = head;
    
    while (fast != NULL and fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
    }

    return slow;

}


int main()
{
    Node *head = takeInput();
    print(head);
    cout << endl;
    
    Node*mid = getMid(head);
    cout << mid->data;

    return 0;
}
