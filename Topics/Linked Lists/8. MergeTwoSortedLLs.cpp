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

Node* merge(Node* A, Node* B){
    // base case - if A NULL return b else B Null return A
    // Make newHead C, if (aData < bData) store c as a and cNext as merge(aNExt, b)
    // else, C as B, and cNext as merge(a, bNext)

    if (A == NULL){
        return B;
    }

    if (B == NULL){
        return A;
    }

    Node* C;
    if (A->data < B->data){
        C = A;
        C->next = merge(A->next, B);
    }else{
        C = B;
        C->next = merge(A, B->next);
    }

    return C;
}




int main()
{
    Node* head1 = takeInput();
    Node* head2 = takeInput();

    print(head1);
    cout << endl;
    print(head2);
    cout << endl;

    Node* mergedHead = merge(head1, head2);
    print(mergedHead);
    
     

    return 0;
}
