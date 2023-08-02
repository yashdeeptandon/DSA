#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *buildTree(Node *root)
{
    cout << "Enter the data: ";
    int data;
    cin >> data;

    root = new Node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter data for inserting in left of " << data << " : ";
    cout << endl;
    root->left = buildTree(root->left);

    cout << "Enter data for inserting in right of " << data << " : ";
    cout << endl;
    root->right = buildTree(root->right);

    return root;
}

void levelOrderTraversal(Node *root) // also called BFS(Breadth-first-search)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL); // seperator to print tree in level order

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL) // last level is completely traversed thus need to hit enter
        {
            cout << endl;
            if (!q.empty()) // queue still has some child nodes this inserting seperator for different lever
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void buildTreeFromLevelOrder(Node *&root)
{
    queue<Node *> q;
    int data;
    cout << "Enter Data for root: ";
    cin >> data;
    root = new Node(data);
    q.push(root);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        cout << "Left node for " << temp->data << endl;
        int leftData;
        cin >> leftData;

        if (leftData != -1)
        {
            temp->left = new Node(leftData);
            q.push(temp->left);
        }

        cout << "Right node for " << temp->data << endl;
        int rightData;
        cin >> rightData;

        if (rightData != -1)
        {
            temp->right = new Node(rightData);
            q.push(temp->right);
        }
    }
}

void inOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    // Left-Node-Right
    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}

void preOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    // Node-Left-Right
    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void postOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    // Left-Right-Node
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << " ";
}

int main()
{
    Node *root = NULL;

    // creating a tree
    root = buildTree(root);
    cout << "Printing the level order traversal: " << endl;
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    // level order traversal
    levelOrderTraversal(root);
    cout << "In-Order Traversal: " << endl;
    inOrderTraversal(root);
    cout << endl;
    cout << "Pre-Order Traversal: " << endl;
    preOrderTraversal(root);
    cout << endl;
    cout << "Post-Order Traversal: " << endl;
    postOrderTraversal(root);
    cout << endl;
    buildTreeFromLevelOrder(root);
    levelOrderTraversal(root);
}