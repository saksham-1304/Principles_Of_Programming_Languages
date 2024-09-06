/*Question 2: Program to add a node to ((n/2)+2)th position in a existing linked list*/

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
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }

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
        cout << temp->data<<"->";
        temp = temp->next;
    }
}

int main(){
    

}