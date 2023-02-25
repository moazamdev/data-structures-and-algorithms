// reverse a number

#include<iostream>
using namespace std;
int main()
{
    cout << endl;
    // declaring variables and taking user input
    int n, reverse = 0, last_dig;
    cin >> n;
    // looping until n is not 0 or less than it
    while (n > 0)
    {
        // extracting the last digit
        last_dig = n % 10;
        // instead of adding numbers we're joining them
        reverse = reverse * 10 + last_dig;
        // updating n to its new value
        n = n / 10;
    }
    cout << reverse << endl;
    cout << endl;
    return 0;
}