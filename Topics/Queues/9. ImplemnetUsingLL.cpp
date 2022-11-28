
class Queue{
    public:
        ListNode* frontTrack;
        ListNode* rear;
        int currentSize = 0;
        int totalSize = 0;

        Queue(int capacity){
            frontTrack = NULL;
            rear = NULL;
            currentSize = 0;
            totalSize = capacity;
        }


        // isEmpty
        bool isEmpty(){
            return  rear == NULL;
        }

        // size
        int size(){
            return currentSize;
        }

        // front
        int front(){
            if (frontTrack == NULL) return -1;
            return frontTrack->data;
        }

        // rear
        int back(){
            if (rear == NULL) return -1;
            return rear->data;
        }

        // push 
        void push(int element){
            ListNode* temp = new ListNode(element);
            if (!rear){
                frontTrack = temp;
                rear = temp;
                currentSize++;
                return;
            }

            rear->next = temp;
            rear = temp;
            currentSize++;
        }

        // pop
        void pop(){
            if (!this->frontTrack) return;
            ListNode* temp = this->frontTrack;
            frontTrack = frontTrack->next;
            if (!frontTrack) rear = NULL;
            currentSize--;
        }
};
