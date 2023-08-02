#include <bits/stdc++.h>

using namespace std;

class Queue
{
public:
    int size;
    int front;
    int rear;
    int *arr;

    // constructor
    Queue(int size)
    {
        this->size = size;
        front = rear = 0;
        arr = new int[size];
    }

    void push(int element)
    {
        if (rear < size)
        {
            arr[rear] = element;
            rear++;
        }
        else
        {
            cout << "Queue Overflow Exception" << endl;
        }
    }

    int pop()
    {
        if (front == rear)
        {

            return -1;
        }
        else
        {
            int ans = arr[front];
            arr[front] = -1;
            front++;
            // for ustilizing array
            if (front == rear)
            {
                front = 0;
                rear = 0;
            }

            return ans;
        }
    }

    int qfront()
    {
        if (front == rear)
        {
            return -1;
        }
        else
        {
            return arr[front];
        }
    }

    bool isEmpty()
    {
        if (front == rear)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
}