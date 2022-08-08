class Node{
    public:
        int data;
        Node* next;

        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

class Stack{
    public:
        Node* topTrack;
        int stackSize;
        int totalSize;

        Stack (int capacity){
            topTrack = NULL;
            stackSize = 0;
            totalSize = capacity;
        }

        bool isEmpty(){
            return topTrack == NULL;
        }

        int size(){
            return stackSize;
        }

        int top(){
            if (!isEmpty()) return topTrack->data;
            else return -1;
        }

        void push(int element){
            Node* extraNode = new Node(element);
            extraNode->data = element;
            extraNode->next = topTrack;
            topTrack = extraNode;
            stackSize += 1;
        }

        void pop(){
            if (!topTrack) return;
            topTrack = topTrack->next;
            stackSize -= 1;

        }
};
