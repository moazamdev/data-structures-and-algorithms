#include <iostream>
#include <stack>
#include <string>
using namespace std;

stack<char> ms;
bool check_type(char c)
{
    char s_top;
    switch (c)
    {
    case ')':
        s_top = ms.top();
        ms.pop();
        // if the opening bracket is not of same type
        if (s_top == '[' || s_top == '{')
            return false;
        break;
    case ']':
        s_top = ms.top();
        ms.pop();
        // if the opening bracket is not of same type
        if (s_top == '(' || s_top == '{')
            return false;
        break;
    case '}':
        s_top = ms.top();
        ms.pop();
        // if the opening bracket is not of same type
        if (s_top == '(' || s_top == '[')
            return false;
    }
    return true;
}

bool check_balanced_paran(string exp)
{
    int len = exp.length();
    for (int i = 0; i < len; i++)
    {
        if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{')
        {
            ms.push(exp[i]);
        }
        else
        {
            if (ms.empty() || !check_type(exp[i]))
            {
                return false;
            }
        }
    }
    return ms.empty() ? true : false;
}
int main()
{
    string exp = "{[][]}";
    if (check_balanced_paran(exp))
        cout << "Balanced\n";
    else
        cout << "Not Balanced\n";

    return 0;
}
