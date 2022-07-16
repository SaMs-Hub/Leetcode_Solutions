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
    cout << endl;
    cout << count;
}


void deleteHead(Node*&head){
    // if head is null, return
    // else store headNext in temp, delete head, call temp as head
    if(head == NULL){
        return;

    }

    Node*temp = head->next; 
    delete head;
    head = temp;
}



int main()
{
    Node *head = takeInput();
    print(head);

    deleteHead(head);
    print(head);

    return 0;
}


// App 2 - Same as Prev

Node* deleteHead(Node* head){
    if(!head) return head;

    Node* currentNode = head->next;
 
    return currentNode;
}


