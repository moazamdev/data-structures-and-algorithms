#include <iostream>
#include <stack>
using namespace std;

int perform_operation(int op1, int op2, char operation)
{
    switch (operation)
    {
    case '+':
        return op1 + op2;
    case '-':
        return op1 - op2;
    case '*':
        return op1 * op2;
    case '/':
        return op1 / op2;
    default:
        cout << "Invalid operator\n";
        return -1;
    }
}

bool check_numeric(char c)
{
    return (c >= '0' && c <= '9') ? true : false;
}
bool check_operator(char c)
{
    return (c == '+' || c == '-' || c == '*' || c == '/') ? true : false;
}
int evaluate_postfix(string exp)
{
    stack<int> ms;
    int len = exp.length();
    for (int i = 0; i < len; i++)
    {
        // this will jump to next iteration skipping the below code
        if (exp[i] == ',' || exp[i] == ' ')
            continue;
        else if (check_numeric(exp[i]))
        {
            // Extract the numeric operand from the string
            // Keep incrementing i as long as you are getting a numeric digit.
            int operand = 0;
            while (i < len && check_numeric(exp[i]))
            {
                // For a number with more than one digits, as we are scanning from left to right.
                // Everytime , we get a digit towards right, we can multiply current total in operand by 10
                // and add the new digit.
                operand = (operand * 10) + (exp[i] - '0');
                i++;
            }
            // Finally, you will come out of while loop with i set to a non-numeric character or end of string
            // decrement i because it will be incremented in increment section of loop once again.
            // We do not want to skip the non-numeric character by incrementing i twice.
            i--;

            // Push operand on stack.
            ms.push(operand);
        }
        else if (check_operator(exp[i]))
        {
            int op2 = ms.top();
            ms.pop();
            int op1 = ms.top();
            ms.pop();
            int result = perform_operation(op1, op2, exp[i]);
            ms.push(result);
        }
    }
    return ms.top();
}

int main()
{
    // string exp = "20,3,*,5,4,*,+,9,-";
    string exp = "2,3,6,*,+,4,2,*,-,";
    cout << "Result: " << evaluate_postfix(exp);
    return 0;
}