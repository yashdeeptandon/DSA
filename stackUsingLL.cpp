#include <iostream>

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

class Stack
{
public:
    Node *top;

    Stack()
    {
        top = NULL;
    }

    void push(int data)
    {
        Node *newNode = new Node(data);
        if (top == NULL)
        {
            top = newNode;
        }
        else
        {
            newNode->next = top;
            top = newNode;
        }
    }

    void pop()
    {
        if (top == NULL)
        {
            cout << "Stack Underflow" << endl;
        }
        else
        {
            Node *temp = top;
            top = top->next;
            cout << temp->data << endl;
            delete temp;
        }
    }

    bool isEmpty()
    {
        return top == NULL;
    }

    void print()
    {
        Node *temp = top;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    Stack s;
    s.push(2);
    s.push(3);
    s.print();
    s.pop();
    s.print();
    return 0;
}