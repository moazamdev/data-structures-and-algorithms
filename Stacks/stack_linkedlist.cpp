#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
Node *top = NULL;
void Push(int x)
{
    Node *newNode = new Node(x);
    newNode->next = top;
    top = newNode;
}
void Pop()
{
    if (top == NULL)
    {
        cout << "Stack Underflow\n";
        return;
    }
    Node* temp = top;
    top = top->next;
    temp->next = NULL;
    free(temp);
}
void IsEmpty()
{
    if (top == NULL)
        cout << "Stack is empty\n";
    else
        cout << "Stack is not empty\n";
}
int Top()
{
    if (top == NULL)
    {
        cout << "Error: Stack is empty " << endl;
        return 0;
    }
    cout << "Top: " << top->data << endl;
    return top->data;
}
void Print()
{
    Node* temp = top;
    cout << "Stack: ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}
int main()
{
    Push(2); Print();
    Push(3); Print();
    Push(4); Print();
    // Top();
    Pop(); Print();
    Pop(); Print();
    IsEmpty();
    // Top();
    Pop(); 
    IsEmpty();
    Top();
    return 0;
}