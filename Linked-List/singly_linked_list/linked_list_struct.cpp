#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

bool checkIndex(Node *head, int pos)
{
    int count = 0;
    Node *temp = head;
    while (temp->next != NULL)
    {
        count++;
        temp = temp->next;
    }
    if (count < pos)
    {
        return false;
    }
    return true;
}

void insertAtBeg(Node *&head, int val)
{
    Node *newNode = new Node();
    newNode->data = val;

    newNode->next = head;
    head = newNode;
}

void insertAtPos(Node *&head, int val, int pos)
{
    if (!checkIndex(head, pos))
    {
        cout << "Position overflow" << endl;
        return;
    }

    Node *newNode = new Node();
    newNode->data = val;

    if (pos == 0)
    {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node *prev = head;
    for (int i = 0; i < pos - 1; i++)
    {
        prev = prev->next;
    }

    newNode->next = prev->next;
    prev->next = newNode;
}

void insertAtEnd(Node *&head, int val)
{
    Node *newNode = new Node();
    newNode->data = val;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void searching(Node *head, int key)
{
    Node *temp = head;
    bool flag = false;
    while (temp->next != NULL)
    {
        if (temp->data == key)
        {
            flag = true;
            break;
        }
        temp = temp->next;
    }
    if (flag)
        cout << "Found\n";
    else
        cout << "Not Found\n";
}

void deletion(Node *&head, int pos)
{
    if (!checkIndex(head, pos))
    {
        cout << "Position overflow" << endl;
        return;
    }

    if (pos == 0)
    {
        head = head->next;
    }

    int i = 0;
    Node *prev = head;
    while (i < pos - 1)
    {
        prev = prev->next;
        i++;
    }
    Node *temp = prev->next;
    prev->next = temp->next;
    free(temp);
}

void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main()
{
    cout << endl
         << endl;

    // creating head pointer
    Node *head = NULL;

    // inserting at beginning
    insertAtBeg(head, 2);

    // inserting at ending
    insertAtEnd(head, 4);
    insertAtEnd(head, 6);
    insertAtEnd(head, 8);

    // inserting at nth position
    insertAtPos(head, 5, 2);
    // displaying data values
    display(head);

    // inserting at beginning
    insertAtBeg(head, 0);
    // displaying data values
    display(head);

    // deleting a node using index
    deletion(head, 2);
    // displaying data values
    display(head);

    // searching using data values
    searching(head, 5);

    cout << endl
         << endl;
    return 0;
}