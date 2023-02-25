// Print fibonacci numbers
#include<iostream>
using namespace std;

void fibonacci(int n)
{
    int t1 = 0, t2 = 1, next_term;

    for (int i = 0; i < n; i++)
    {
        cout << t1 << endl;
        next_term = t1 + t2;
        t1 = t2;
        t2 = next_term;
    }
}

int main()
{
    cout << endl << endl;
    int n;
    cin >> n;
    fibonacci(n);
    cout << endl << endl;
    return 0;
}