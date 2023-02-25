#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *front = NULL;
Node *rear = NULL;

bool IsEmpty()
{
    return (front == NULL && rear == NULL) ? true : false;
}
void Enqueue(int val)
{
    Node *newNode = new Node();
    newNode->data = val;
    newNode->next = NULL;
    if (IsEmpty())
    {
        front = rear = newNode;
        return;
    }
    rear->next = newNode;
    rear = newNode;
}
void Dequeue()
{
    Node *temp = front;
    if (IsEmpty())
    {
        cout << "empty\n";
        return;
    }

    if (front == rear)
        front = rear = NULL;
    else
        front = front->next;

    temp->next = NULL;
    free(temp);
}
int Front()
{
    return front->data;
}
void Print()
{
    Node *temp = front;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    cout << endl
         << endl;

    Enqueue(2);
    Print();
    Enqueue(3);
    Print();
    Enqueue(4);
    Print();
    Dequeue();
    Print();
    Dequeue();
    Print();
    Dequeue();
    Print();
    Dequeue();
    Print();

    cout << endl
         << endl;
    return 0;
}