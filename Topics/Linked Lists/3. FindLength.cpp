// Approach 1 - Naive
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        next = NULL;
    }
};

Node *takeInput()
{
    // make a static value, to run the input loop until
    // it reaches value
    int data;
    cin >> data;

    // assign null to head, tail before starting
    Node *head = NULL;
    Node *tail = NULL;

    while (data != -1){
    // make a dynamic object after every data
     Node *NewNode = new Node(data);
    // if head is null, store newNode in head,tail
    if (head == NULL){
        head = NewNode;
        tail = NewNode;
    }else{
    // else call nextvalue in tail, and store newNode as tail
        tail->next = NewNode;
        tail = tail->next;

    }


        cin >> data;
    }

    // return head at last;
    return head;


}

void print(Node *head)
{
    // make a temp variable to store head
    Node *temp = head;

    // run a loop until temp points to null
    while (temp != NULL){
    // console temp.data and assign nextValue to it
        cout << temp->data << "->";
        temp = temp->next;
    }

}

int printLength(Node *head){
    // create a var count to keep traversing count + 1
    // until head becomes NULL
    int count = 0;
    while (head != NULL){
        head = head->next;
        count += 1;
    }

    cout << count;
}


int main()
{
    Node *head = takeInput();
    
    print(head);
    cout << endl;
    printLength(head);
    return 0;


}


------
// Approach 2 - Recursive
int Length(Node *head){
// base case - if head is NULL return 0
if (head == NULL){
    return 0;
}


// smallerCase - call via headNext, and store
int smallerCount = Length(head->next);

// returnCalc - return 1 + headNext
return 1 + smallerCount;
}

