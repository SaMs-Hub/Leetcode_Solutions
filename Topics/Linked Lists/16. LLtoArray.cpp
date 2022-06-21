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

vector<int> LLTOArr(Node* head){
    vector<int> res;

    Node* temp = head;
    while (temp != NULL){
        res.push_back(temp->data);
        temp = temp->next;
    }

    return res;
}

int main()
{
    Node* head = takeInput();

    vector<int> arr = LLTOArr(head);
    for (auto x: arr){
        cout << x << ',';
    }

   
    return 0;
}
