// Print all prime numbers between a and b

#include<iostream>
using namespace std;
int main()
{
    cout << endl << endl;
    // declaring variables and taking input from the user
    int a, b, x, z;
    cin >> a >> b;

    // looping through each number btw a & b
    for (x = a; x <= b; x++)
    {
        // looping from 2 to specific number
        for(z = 2; z < x; z++)
        {
            // to check if it divisible or not
            if (x % z == 0)
            {
                break;
            }
        }
        // checking if the loop ends due to break or it has run completely 
        // and if it is run completely without breaking
        // than we will print number because that number is prime
        if (x == z){
            cout << x << endl;
        }
    }
    cout << endl << endl;
    return 0;
}