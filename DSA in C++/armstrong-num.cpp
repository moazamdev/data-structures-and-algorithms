#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    cout << endl;

    int n, last_dig, sum = 0;
    cin >> n;
    int orig_num = n;

    // looping until n is greater than 0
    while (n > 0)
    {
        // extracting last digit
        last_dig = n % 10;
        // taking cube of the number and adding it in the sum
        sum += last_dig * last_dig * last_dig;
        // updating the n
        n /= 10;
    }
    if (sum == orig_num)
        cout << "Armstrong" << endl;
    else
        cout << "Not Armstrong" << endl;

    cout << endl;
    return 0;
}