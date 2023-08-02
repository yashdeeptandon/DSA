#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    Node *prev;
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// gives length of linked list
void getlength(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }

    cout << "Length of LL is: " << count << endl;
}

void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insertAtPosition(Node *head, Node *tail, int pos, int data)
{

    if (pos == 1) // if element needs to be inserted in first place
    {
        insertAtHead(head, data);
        return;
    }

    int count = 1;
    Node *temp = head;
    while (count < pos - 1)
    {
        count++;
        temp = temp->next;
    }

    // inserting at the last node
    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
    }

    Node *nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

void deleteNode(Node *&head, Node *&tail, int pos)
{
    // deleting first node
    if (pos == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    // for deleting middle or last node
    else
    {
        Node *prev = NULL;
        Node *current = head;
        int cnt = 1;
        while (cnt < pos)
        {
            prev = current;
            current = current->next;
            cnt++;
        }
        // deleting last node
        if (current->next == NULL)
        {
            prev->next = NULL;
            current->prev = NULL;
            tail = prev;
            delete current;
            return;
        }

        prev->next = current->next;
        current->next->prev = prev;
        current->prev = NULL;
        current->next = NULL;
        delete current;
    }
}
int main()
{
    Node *node1 = new Node(10);
    Node *tail = node1;
    print(node1);
    getlength(node1);

    insertAtHead(node1, 12);
    print(node1);

    insertAtHead(node1, 15);
    print(node1);

    insertAtHead(node1, 20);
    print(node1);

    insertAtTail(tail, 25);
    print(node1);

    insertAtPosition(node1, tail, 2, 100);
    print(node1);

    deleteNode(node1, tail, 1);
    print(node1);

    deleteNode(node1, tail, 3);
    print(node1);
    cout << "Head-> " << node1->data << endl;
    cout << "Tail-> " << tail->data << endl;

    deleteNode(node1, tail, 4);
    print(node1);
    cout << "Head-> " << node1->data << endl;
    cout << "Tail-> " << tail->data << endl;
}