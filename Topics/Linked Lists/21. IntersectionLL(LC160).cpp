// App 1 - Optimal
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
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
}

int getLength(Node* head){
    int count = 0;
    while (head != NULL){
        count +=1 ;
        head = head->next;
    }  

    return count;
}

Node* findIntersection(Node* h1, Node* h2, int diff){
    while (diff > 0){
        h1 = h1->next;
        diff -= 1;
    }

    while (h1 != NULL and h2 != NULL){
       
        if (h1->data == h2->data){
           
            return h1;
        }

        h1 = h1->next;
        h2 = h2->next;
    }
    return NULL;
}

Node *getIntersection(Node *h1, Node *h2)
{
    int firstLength = getLength(h1);
    int secondLength = getLength(h2);

    if (firstLength > secondLength){
        findIntersection(h1, h2, firstLength - secondLength);
    }else{
        findIntersection(h2, h1, secondLength - firstLength);
    }
    
}

int main()
{
    Node *h1 = takeInput();
    Node *h2 = takeInput();

    Node* head = getIntersection(h1, h2);
    print(head);
    

    return 0;
}



