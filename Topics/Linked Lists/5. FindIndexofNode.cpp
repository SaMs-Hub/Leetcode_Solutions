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

//bruteForce
int searchNode(Node* head, int data){
    // iterate through all the nodes, if HeadData is data,return true, else store headNExt in head
    int index = 0;
    while (head != NULL){
        if (head->data == data){
            return index;
        }
        head = head->next;
        index += 1;
    }
    return -1;

}

//Recursive
bool searchNode(Node* head, int data){
    // if head is null, return false
    // else if headData is data, return true, else call on headNExt

    if (head == NULL){
        return false;
    }

    if (head->data == data){
       return true;
    }

    return searchNode(head->next, data);
}

int main()
{
    Node *head = takeInput();
    print(head);
    cout << endl;
    
    int value = searchNode(head, 3);
    if (value != -1){
        cout << "Present at " << value;
    }else{
        cout << "Not present";
    }


    return 0;
}
