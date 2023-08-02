#include <bits/stdc++.h>

using namespace std;

class CircularQueue
{
public:
    int *arr;
    int front;
    int rear;
    int size;

    // constructor
    CircularQueue(int size)
    {
        this->size = size;
        front = rear = -1;
        arr = new int[size];
    }

    void enqueue(int element)
    {
        if ((rear == (front - 1) % (size - 1)) || (front == 0 && rear == size - 1))
        {
            cout << "Queue Overflow Exception" << endl;
        }
        else if (front == -1) // for inputing first element
        {
            front = rear = 0;
            arr[rear] = element;
        }
        else if (rear < size - 1 && front != 0) // for cyclic order
        {
            rear = 0;
            arr[rear] = element;
        }
        else // normal flow
        {
            rear++;
            arr[rear] = element;
        }
    }

    int dequeue()
    {
        int ans = arr[front];
        arr[front] = -1;
        if (front == -1) // to check queue is empty
        {
            cout << "Queue is Empty" << endl;
        }
        else if (front == rear) // single element is present
        {
            rear = front = -1;
        }
        else if (front == size - 1) // to maintain cyclic nature
        {
            front = 0;
        }
        else // normal flow
        {
            front++;
        }

        return ans;
    }

    int front()
    {
    }

    bool isEmpty()
    {
    }
};

int main()
{
}