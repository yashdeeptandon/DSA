#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int data)
{
    // creating new node
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int data)
{
    // creating new node
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node *&head, Node *&tail, int pos, int data)
{
    // creating a temp node for traversing to the desired node
    Node *temp = head;
    int count = 1; // depicting that we are currently on 1 position
    // traversing to pos where the new node needs to be inserted
    while (count < pos - 1)
    {
        temp = temp->next;
        count++;
    }

    if (count == 1) // if element needs to be inserted in first place
    {
        insertAtHead(head, data);
        return;
    }

    // inserting at last position
    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }

    // creating a new node that is to be inserted
    Node *nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next; // connecting to next node
    temp->next = nodeToInsert;       // connecting this node to previous node
}
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

void deleteNode(Node *&head, int pos)
{
    // for first node
    if (pos == 1)
    {
        Node *temp = head;
        head = head->next;
        // memory free
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *current = head;
        Node *prev = NULL;

        int count = 1;
        while (count < pos)
        {
            prev = current;
            current = current->next;
            count++;
        }

        prev->next = current->next;
        // memory free
        current->next = NULL;
        delete current;
    }
}

int main()
{
    Node *node1 = new Node(10);
    // head pointing to node1
    Node *head = node1;
    // tail pointing to node1
    Node *tail = node1;
    print(head);

    insertAtTail(tail, 12);
    insertAtTail(tail, 15);
    print(head);

    insertAtPosition(head, tail, 3, 13);
    print(head);
    insertAtPosition(head, tail, 1, 8);
    print(head);
    insertAtPosition(head, tail, 6, 20);
    print(head);

    cout << "head-> " << head->data << endl;
    cout << "tail-> " << tail->data << endl;

    deleteNode(head, 6);
    print(head);
    return 0;
}