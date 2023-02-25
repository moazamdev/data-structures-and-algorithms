#include <iostream>
using namespace std;

const int SIZE = 10;
int arr[SIZE];
int front = -1, rear = -1;

bool IsEmpty()
{
    return (front == -1 && rear == -1) ? true : false;
}
bool IsFull()
{
    return ((rear + 1) % SIZE == front) ? true : false;
}
void Enqueue(int val)
{
    if (IsFull())
        return;
    else if (IsEmpty())
        front = rear = 0;
    else
        rear = (rear + 1) % SIZE;

    arr[rear] = val;
}
void Dequeue()
{
    if (IsEmpty())
        return;
    else if (front == rear)
        front = rear = -1;
    else
        front = (front + 1) % SIZE;
}
int Front()
{
    return arr[front];
}
void Print()
{
    for (int i = front; i <= rear; i++)
    {
        cout << arr[i] << " ";
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
    Enqueue(5);
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