#include<iostream>
using namespace std;
const int max_size = 20;
int arr[max_size];
int top = -1;
void Push(int x)
{
    if (top == (max_size - 1))
    {
        cout << "Error: Stack Overflow\n";
        return;
    }
    arr[++top] = x;
}
void Pop()
{
    if (top == -1)
    {
        cout << "Error: Stack Underflow\n";
        return;
    }
    top--;
}
void Top()
{
    if (top == -1 || top == (max_size - 1)) 
    {
        cout << "Stack is empty\n";
        return;
    }
    cout << arr[top];
}
bool IsEmpty()
{
    if (top == -1)
    {
        cout << "Stack is empty\n";
        return true;
    }
    else
    {
        cout << "Stack is not empty\n";
        return false;

    }
}
void Print()
{
    cout << "Stack: ";
    for (int i = 0; i <= top; i++)
        cout << arr[i] << " ";
    cout << "\n";
}
int main()
{
    cout << endl << endl;
    
    Push(2); Print();
    Push(3); Print();
    Push(4); Print();
    // Top();
    Pop(); Print();
    Pop(); Print();
    IsEmpty();
    // Top();
    Pop(); Print();
    IsEmpty();
    Top();

    cout << endl << endl;
    return 0;
}