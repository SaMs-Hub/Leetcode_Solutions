class Queue
{
public:
    int frontValue, rearValue, currentSize, totalSize;
    vector<int> queue;

    Queue(int totalSize)
    {

        this->frontValue = 0;
        currentSize = 0;
        rearValue = totalSize - 1;
        this->totalSize = totalSize;
        queue.resize(this->totalSize);
    }

    // empty
    bool isEmpty()
    {
        return currentSize == 0;
    }
    // size
    int size()
    {
        return currentSize;
    }
    // push

    void push(int element)
    {
        if (currentSize == totalSize)
            return;
        this->rearValue = (this->rearValue + 1) % totalSize;
        this->queue[this->rearValue] = element;
        this->currentSize = (this->currentSize) + 1;
    }

    // pop
    void pop()
    {
        this->frontValue = (this->frontValue + 1) % totalSize;
        this->currentSize = this->currentSize - 1;
    }

    // front
    int front()
    {
        if (isEmpty())
        {
            return -1;
        }
        return this->queue[this->frontValue];
    }

    // back
    int back()
    {
        if (isEmpty())
        {
            return -1;
        }
        return this->queue[this->rearValue];
    }
};
