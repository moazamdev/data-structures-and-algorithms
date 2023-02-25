// Print pascal triangle

#include<iostream>
using namespace std;

int fact(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

void pascal(int row)
{
    float result;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            result = (fact(i) / (fact(i - j) * fact(j)));
            cout << result << " ";
        }
        cout << endl;
    }
}

int main()
{
    cout << endl << endl;

    int r;
    cin >> r;
    pascal(r);
    cout << endl << endl;
    return 0;
}