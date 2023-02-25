#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool check_operator(char c)
{
    return (c == '+' || c == '-' || c == '*' || c == '/') ? true : false;
}

bool check_numeric(char c)
{
    return (c >= '0' && c <= '9') ? true : false;
}

bool is_opening_paranthese(char c)
{
    return (c == '(' || c == '[' || c == '{') ? true : false;
}

bool is_closing_paranthese(char c)
{
    return (c == ')' || c == ']' || c == '}') ? true : false;
}

int calc_weight(char op)
{
    int weight = -1;
    if (op == '+' || op == '-') weight = 1;
    else if (op == '*' || op == '/') weight = 2;
    else if (op == '$') weight = 3;
    
    return weight;
}

bool check_higher_precedence(char ms_top, char infix_char)
{
    int op1_weight = calc_weight(ms_top);
    int op2_weight = calc_weight(infix_char);

    if (op1_weight == op2_weight)
    {
        if (ms_top == '$') return false;
        else return true;
    }

    return op1_weight > op2_weight ? true : false;
}

string infix_to_postfix(string infix)
{
    stack<char> ms;
    string postfix = "";
    int len = infix.length();
    for (int i = 0; i < len; i++)
    {
        if (infix[i] == ' ' || infix[i] == ',')
            continue;
        else if (check_numeric(infix[i]))
        {
            // this logic is useful when we have more than one character in a number
            int operand = 0;
            while (i < len && check_numeric(infix[i]))
            {
                operand = (operand * 10) + (infix[i] - '0');
                i++;
            }
            i--;
            postfix += to_string(operand);
            postfix += ',';
        }
        else if (check_operator(infix[i]))
        {
            while (!ms.empty() && !is_opening_paranthese(infix[i]) && check_higher_precedence(ms.top(), infix[i]))
            {
                postfix += ms.top();
                postfix += ',';
                ms.pop();
            }
            ms.push(infix[i]);
        }
        else if (is_opening_paranthese(infix[i]))
        {
            ms.push(infix[i]);
        }
        else if (is_closing_paranthese(infix[i]))
        {
            while (!ms.empty() && !is_opening_paranthese(ms.top()))
            {
                postfix += ms.top();
                ms.pop();
            }
            ms.pop();
        }
    }
    while (!ms.empty())
    {
        postfix += ms.top();
        postfix += ',';
        ms.pop();
    }
    return postfix;
}

int main()
{
    string infix = "2+3*6-4*2";
    string postfix = infix_to_postfix(infix);
    cout << "Postfix: " << postfix << endl;
    return 0;
}