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

// taking input 
Node *takeInput()
{
    // have a condition such that users inputs are not counted,
    // and they get ended after the input user gives
    int data;
    cin >> data;

    // set head as NULL to start with
    Node *head = NULL;

    // run a while loop until input reaches end
    while (data != -1)
    {
        // make a dynamic node and store data using constructor
        Node *NewNode = new Node(data);
        // if head is NULL, set head as NewNode
        if (head == NULL)
        {
            head = NewNode;
        }
        else
        {
            // else set newNode as address of nextNode
            // making sure head of next is not NULL, else increament head
            Node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = NewNode;
        }

        // else keep taking input
        cin >> data;
    }

    return head;
}

// printing the Node
void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
}

int main()
{

    // initializing node head, address, and data

    Node *head = takeInput();
    print(head);

    return 0;
}


// Approach 2 - better Input
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

// taking input
Node *takeInput()
{
    // have a condition such that users inputs are not counted,
    // and they get ended after the input user gives
    int data;
    cin >> data;

    // set head as NULL to start with
    Node *head = NULL;
    Node *tail = NULL;

    // run a while loop until input reaches end
    while (data != -1)
    {
        // make a dynamic node and store data using constructor
        Node *NewNode = new Node(data);
        // if head is NULL, set head as NewNode
        if (head == NULL)
        {
            head = NewNode;
            tail = NewNode;

        }
        else
        {
            tail->next = NewNode;
            tail = tail->next;
        }

        // else keep taking input
        cin >> data;
    }

    return head;
}

// printing the Node
void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
}

int main()
{

    // initializing node head, address, and data

    Node *head = takeInput();
    print(head);

    return 0;
}

