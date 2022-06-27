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
    int data;
    cin >> data;

    Node *head = NULL;
    Node *tail = NULL;

    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = tail->next;
        }
        cin >> data;
    }
    return head;
}

void print(Node *head)
{
    Node *currentNode = head;
    while (currentNode != NULL)
    {
        cout << currentNode->data << "->";
        currentNode = currentNode->next;
    }
}

Node *rotateList(Node *head, int k)
{
    if (head == NULL or head->next == NULL){
        return head;
    }
    Node *currentNode = head;
    int length = 0;
    while (currentNode != NULL)
    {
        length += 1;
        currentNode = currentNode->next;
    }

    k = k % length;
    if (k == 0)
    {
        return head;
    }

    k = length - k;
    currentNode = head;
    Node *temp;
    int i = 1;
    while (currentNode->next != NULL)
    {
        if (i == k)
        {
            temp = currentNode->next;
            currentNode->next = NULL;
            currentNode = temp;
        }
        else
        {
            currentNode = currentNode->next;
        }
        i += 1;
    }

    currentNode->next = head;
    head = temp;
    return head;
}

int main()
{
    Node *head = takeInput();

    print(head);
    head = rotateList(head, 3);
    cout << endl;
    print(head);

    return 0;
}
