//! Using Built-in Stack
#include <iostream>
#include <string.h>
#include <stack>
using namespace std;
int main()
{
    cout << endl
         << endl;

    string greet;
    cout << "Input: ";  cin >> greet;
    stack<char> revStr;
    int len = greet.length();

    for (int i = 0; i < len; i++)
    {
        revStr.push(greet[i]);
    }
    for (int i = 0; i < len; i++)
    {
        greet[i] = revStr.top();
        revStr.pop();
    }
    cout << "Output: " << greet << endl;

    cout << endl
         << endl;
    return 0;
}

//! Using user-defined Stack

// #include<iostream>
// #include<string.h>
// using namespace std;
// const int max_size = 100;
// char arr[max_size];
// int top = -1;
// void Push(char x)
// {
//     if (top == (max_size - 1))
//     {
//         cout << "Error: Stack Overflow\n";
//         return;
//     }
//     top++;
//     arr[top] = x;
// }
// void Pop()
// {
//     if (top == -1)
//     {
//         cout << "Error: Stack Underflow\n";
//         return;
//     }
//     top--;
// }
// char Top()
// {
//     return arr[top];
// }
// void Print()
// {
//     cout << "Stack: ";
//     for (int i = 0; i <= top; i++)
//         cout << arr[i] << " ";
//     cout << "\n";
// }
// int main()
// {
//     cout << endl << endl;

//     string greet = "hello";
//     for (int i = 0; i < greet.length(); i++)
//     {
//         Push(greet[i]);
//     }
//     for (int i = 0; i < greet.length(); i++)
//     {
//         greet[i] = Top();
//         Pop();
//     }
//     cout << greet << endl;

//     cout << endl << endl;
//     return 0;
// }