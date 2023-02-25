#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    // parametrized constructor to reduce
    // memory allocation work and lines of code
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

bool checkIndex(Node *head, int pos)
{
    // initializing a variable for counting total number of nodes in linked list
    int count = 0;
    // creting a temp node
    Node *temp = head;
    // iterating until the temp's next is not NULL
    while (temp->next != NULL)
    {
        // adding 1 to count bcz we found a node
        count++;
        // updating the temp to point to the next node
        temp = temp->next;
    }
    // if the value of pos(position to insert new node) is greater than the count(no. of nodes)
    // e.g count = 3 and pos = 4
    // than condition will be true and it'll return false
    // which means Position Overflow (pos must be less than the nodes present in the linked list)
    if (pos > count)
    {
        return false;
    }
    // otherwise if the pos is less than the count
    // it's possible to insert new node
    return true;
}

void insertAtBeg(Node *&head, int val)
{
    // creating a new node
    Node *newNode = new Node(val);

    // pointing the new node to where the head was pointing
    newNode->next = head;
    // then updating head to point to the new node
    head = newNode;
}

void insertAtPos(Node *&head, int val, int pos)
{
    // base condition for checking
    // if the position is greater than the nodes present in the linked list
    // if pos is greater than print msg otherwise continue program
    if (!checkIndex(head, pos))
    {
        cout << "Position overflow" << endl;
        return;
    }

    // creating a new node and passing it values to constructor
    Node *newNode = new Node(val);

    // if pos is the starting place of linked list
    if (pos == 0)
    {
        // point new node to where head is pointing
        newNode->next = head;
        // update head to point to new node
        head = newNode;
        // exit the function
        return;
    }

    // creating temporary pointer pointing to head
    // it will be used to traverse to the n-1 node
    Node *prev = head;
    // traverse to the n-1 node
    for (int i = 0; i < pos - 1; i++)
    {
        // update the prev pointer by updating it
        prev = prev->next;
    }

    // pointing new node to where the n-1 node is pointing
    newNode->next = prev->next;
    // pointing the n-1 node to new node
    prev->next = newNode;
}

void insertAtEnd(Node *&head, int val)
{
    // creating a new node and passing value to constructor
    Node *newNode = new Node(val);

    // if the list is empty
    if (head == NULL)
    {
        // point the head to new node
        head = newNode;
        // exit function
        return;
    }

    // if there are elements in the list
    // create a temp node pointing to head
    Node *temp = head;
    // iterating until next pointer of head is not NULL
    while (temp->next != NULL)
    {
        // updating temp to move forward
        temp = temp->next;
    }
    // pointing temp to new node
    temp->next = newNode;
}

void searching(Node *head, int key)
{
    // creating a temp pointer
    Node *temp = head;

    // flag is used for condition
    bool flag = false;

    // iterating until next pointer of head is not NULL
    while (temp != NULL)
    {
        // if key matches the data of the node
        if (temp->data == key)
        {
            // mark flag as true
            flag = true;
            // exit the while loop
            break;
        }
        // move the temp forward
        temp = temp->next;
    }
    // check if flag is true (element found)
    if (flag)
        cout << "Found\n";
    // otherwise flag would be false (element not found)
    else
        cout << "Not Found\n";
}

void deletion(Node *&head, int pos)
{
    // checking if position is correct
    if (!checkIndex(head, pos))
    {
        cout << "Position overflow" << endl;
        return;
    }

    // checking if the pos is starting of the list
    if (pos == 0)
    {
        head = head->next;
    }

    // it will be used to traverse to the n-1 node
    int i = 0;
    Node *prev = head;
    // pos-1 would work when pos in an index
    // pos-2 would work when pos is number of node in linked list
    while (i < pos - 1)
    {
        // moving forward the prev pointer
        prev = prev->next;
        i++;
    }
    // pointing the prev pointer to the next of next of prev pointer
    Node *temp = prev->next;
    prev->next = temp->next;
    free(temp);
}

void reverse(Node *&head)
{
    // pointer for previous, current, next node
    Node *prev, *current, *next;
    // setting previous pointer to NULL
    // bcz currently its not pointing anywhere
    prev = NULL;
    // pointing current to where head is pointing
    current = head;
    // iterate until current node is not pointing to NULL
    while (current != NULL)
    {
        // in this loop we need to update few things
        // 1. update next pointer
        // 2. arrange links between nodes
        // 3. update prev pointer
        // 4. update current pointer
        // the order is important otherwise we may get lost

        // pointing next pointer to where current is pointing
        next = current->next;
        // arranging link of node to point backward instead of forward
        current->next = prev;
        // update prev pointer to move forward
        prev = current;
        // and in last update current pointer to move forward
        current = next;
    }
    // in last head should point to the last node in list
    head = prev;
}

void display(Node *head)
{
    // creating a temp node
    Node *temp = head;
    // checking if the temp is pointing to any node or not
    while (temp != NULL)
    {
        // printing in console
        cout << temp->data << "->";
        // updating the temp pointer to point to next node
        temp = temp->next;
    }
    // print NULL for last node in linked list
    cout << "NULL\n";
}

// here first parameter is the original head of the list 
// and second is the ptr pointing where head is pointing
// changing the first parmeter will change the original head of the list
void reverseRecursively(Node *&head, Node *curr)
{
    // base condition
    // stopping when the node's next ptr is pointing to NULL
    // making that node as head of the list 
    // pointing head to the last node of the list 
    if (curr->next == NULL)
    {
        head = curr;
        return;
    }
    // recursively calling the function with
    // first parameter as original head of the list
    // and second parameter is moving the list forward
    reverseRecursively(head,curr->next);
    // coming back to second last node of the list 
    // bcz last node is popped from the stack by pointing head to it 
    // now we have second last node 
    // so pointing next of next ptr to the current node 
    // we are pointing backward
    curr->next->next = curr;
    // and in last we are breaking the forward link
    // by assigning it to no where
    curr->next = NULL;
}

void printForward(Node *head)
{
    if (head == NULL)
        return;

    cout << head->data << "->";
    printForward(head->next);
}

void printBackward(Node *head)
{
    if (head == NULL)
        return;

    printBackward(head->next);
    cout  << "<-" << head->data;
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
    // displaying data values
    display(head);

    // inserting at nth position
    insertAtPos(head, 5, 2);
    // displaying data values
    display(head);
    // inserting at nth position
    insertAtPos(head, 5, 6);
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

    // reversing the linked list
    reverse(head);
    // displaying data values
    display(head);
    cout << endl;

    // displaying forward data values
    printForward(head);
    cout << "NULL" << endl;

    // displaying reversed data values
    cout << "NULL";
    printBackward(head);
    cout << endl << endl;

    reverseRecursively(head, head);
    printForward(head);
    cout << "NULL" << endl;

    cout << endl
         << endl;
    return 0;
}