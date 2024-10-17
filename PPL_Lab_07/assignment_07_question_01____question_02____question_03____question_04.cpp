/*
Assignment 07
Question 1: Program to insert 10 elements in a linked list
*/

/*
Question 2: Program to add a node to ((n/2)+2)th position in a existing linked list
*/

/*
Question 3: Program to remove a node 3rd to last from a existing linked list
*/

/*
Question 4: Program to detect duplicate nodes(s) if exists in a linked list
*/

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // Destructor
    ~Node()
    {
        int value = this->data;
        // memory free

        cout << "Memory is free for node with data " << value << endl;
    }
};

void insertAtHead(Node *&head, int d)
{

    // New Node Create
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int d)
{
    // New Node Create
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node *&head, Node *&tail, int position, int d)
{
    // Insert At Start
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }

    Node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // Inserting At Last Position
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }

    // Creating a node for d
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
    cout << endl;
}

Node *removeNthFromEnd(Node *head, int n)
{
    Node *fast = head;
    Node *slow = head;
    for (int i = 0; i < n; i++)
    {
        if (fast == NULL)
            return head; // In case n is greater than the length of the list
        fast = fast->next;
    }
    if (fast == NULL)
    {
        return head->next;
    }
    while (fast->next != NULL)
    {
        fast = fast->next;
        slow = slow->next;
    }

    Node *delNode = slow->next;
    slow->next = delNode->next;
    delete (delNode);
    return head;
}

void detectduplicateNode(Node *head, unordered_map<int, int> &mapp)
{
    Node *temp = head;
    while (temp != NULL)

    {
        if (mapp[temp->data] > 0)
        {
            cout << "Duplicate Exists" << endl;
            return;
        }
        else
        {
            mapp[temp->data]++;
        }
        temp = temp->next;
    }

    cout << "Duplicate Doesn't Exists" << endl;
}
int main()
{
    cout << "Enter the number of elements you want to insert: ";
    int n;
    cin >> n;
    cout << "Enter the element(s): " << endl;
    Node *head = NULL;
    Node *tail = NULL;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        if (i == 0)
        {
            Node *node = new Node(k);
            head = node;
            tail = node;
        }

        else
        {
            insertAtTail(tail, k);
        }
    }

    printList(head);

    cout << "Enter the value that you want to insert at ((n / 2) + 2)th position " << endl;
    int l;
    cin >> l;
    int position = (n / 2) + 2;
    if (position <= n + 1)
    {
        insertAtPosition(head, tail, position, l);
        printList(head);
    }
    else
    {
        cout << "Invalid position." << endl;
    }
    head = removeNthFromEnd(head, 3);
    printList(head);
    unordered_map<int, int> mapp;
    detectduplicateNode(head, mapp);
}