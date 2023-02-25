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

int main()
{
    cout << endl << endl;
    float result;
    int n, r, sub;
    cin >> n >> r;
    sub = n - r;
    result = fact(n) / (fact(sub) * fact(r));
    cout << result << endl;

    cout << endl << endl;
    return 0;
}