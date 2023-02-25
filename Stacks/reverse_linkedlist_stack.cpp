#include<iostream>
#include<stack>
using namespace std;
struct Node
{
    int data;
    Node* next;
};

void insertAtBeg(Node *&head, int val)
{
    Node *newNode = new Node();
    newNode->data = val;

    newNode->next = head;
    head = newNode;
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
    cout << endl << endl;
    
    Node* head = NULL;
    insertAtBeg(head, 2);
    insertAtBeg(head, 4);
    insertAtBeg(head, 6);
    display(head);
 
    stack<Node*> ms;
    
    Node* temp = head;
    while (temp != NULL)
    {
        ms.push(temp);
        temp = temp->next;
    }

    temp = ms.top(); 
    head = temp;
    ms.pop();
    while (!ms.empty())
    {
        temp->next = ms.top();
        ms.pop();
        temp = temp->next;
    }
    temp->next = NULL;

    display(head);

    
    cout << endl << endl;
    return 0;
}