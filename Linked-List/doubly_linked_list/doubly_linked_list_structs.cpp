#include <iostream>
using namespace std;
struct Node
{
    Node *prev;
    int data;
    Node *next;
};

void insertAtHead(Node *&head, int val)
{
    // creating a new node
    Node *newNode = new Node();
    // initializing values
    newNode->data = val;
    newNode->prev = NULL;
    newNode->next = NULL;

    // if list is empty
    if (head == NULL)
    {
        // point head to new node
        head = newNode;
        return;
    }

    // pointing the previous pointer of the head node to new node
    head->prev = newNode;
    // pointing the next pointer of the new node to the head
    newNode->next = head;
    // pointing head to new node
    head = newNode;
}

void insertAtTail(Node *&head, int val)
{
    // creating a new node
    Node *newNode = new Node();
    // initializing values
    newNode->data = val;
    newNode->prev = NULL;
    newNode->next = NULL;

    // if list is empty
    if (head == NULL)
    {
        // point head to new node
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    // pointing the previous pointer of the head node to new node
    newNode->prev = temp;
    // pointing the next pointer of the new node to the head
    temp->next = newNode;
}

// delete node at end
void deleteFromEnd(Node *&head)
{
    Node *temp1 = head;
    if (temp1->next == NULL)
    {
        head = NULL;
        free(temp1);
        return;
    }
    Node *temp2 = head;
    while (temp2->next->next != NULL)
    {
        temp2 = temp2->next;
    }
    Node *lastNode = temp2->next;
    temp2->next = NULL;
    free(lastNode);
}

// search a node by value
void search(Node *head, int val)
{
    bool flag = false;
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == val)
        {
            flag = true;
            break;
        }
        temp = temp->next;
    }
    if (flag)
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;
}

// is list empty
void isListEmpty(Node* head)
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
    }
    else
        cout << "List is not empty" << endl;
}

void printForward(Node *head)
{
    // temporary pointer pointing to head
    Node *temp = head;
    // if list is empty
    if (temp == NULL)
        return;
    // iterate till last element "NULL" after the last node
    while (temp != NULL)
    {
        // print data
        cout << temp->data << "->";
        // move forward the temp pointer
        temp = temp->next;
    }
    cout << "NULL\n";
}

void printBackward(Node *head)
{
    // temporary pointer pointing to head
    Node *temp = head;
    // if list is empty
    if (temp == NULL)
        return;
    // iterate till last node not the last element "NULL"
    while (temp->next != NULL)
    {
        // move forward the temp pointer
        temp = temp->next;
    }
    // another pointer for traversing backwards
    Node *temp2 = temp;
    cout << "NULL";
    // iterate till last element "NULL" after the last node
    while (temp2 != NULL)
    {
        // print values
        cout << "<-" << temp2->data;
        // move forward the temp pointer
        temp2 = temp2->prev;
    }
}

int main()
{

    cout << endl;
    cout << endl;
    Node *head;
    head = NULL;

    cout << "\nInserting at head\n\n";
    insertAtHead(head, 4);
    insertAtHead(head, 3);
    insertAtHead(head, 2);

    cout << "\nPrint Forward\n";
    printForward(head);
    cout << "\nPrint Backward\n";
    printBackward(head);

    cout << "\nInserting at tail\n";
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    cout << "\nPrint Forward\n";
    printForward(head);

    cout << "\nElement deleted from end\n";
    deleteFromEnd(head);
    cout << "\nElement deleted from end\n";
    deleteFromEnd(head);
    cout << "\nPrint Forward\n";
    printForward(head);

    cout << "\nSearching element\n";
    search(head, 3);

    cout << "\nIs List Empty?\n";
    isListEmpty(head);


    cout << endl;
    cout << endl;
    return 0;
}