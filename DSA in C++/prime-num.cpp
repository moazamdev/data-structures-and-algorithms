// Check if a number is a prime or not

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    cout << endl << endl;
    int n;
    bool isprime = true;
    cin>>n;

    // reducing the searching time using square root function
    // because the higher numbers will be the multiples of smaller numbers
    for(int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "not prime" << endl;
            isprime = false;
            break;
        }
    }
    if (isprime)
        cout << "prime" << endl;
    cout << endl << endl;
    return 0;
}