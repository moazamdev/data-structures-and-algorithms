//^ Get bit at ith position

// #include<iostream>
// using namespace std;

// int getBit(int n, int pos)
// {
//     // left shift 1 by pos
//     // then AND it with the original binary number
//     // after that compare the result with 0
//     // if the result is not 0 then condition becomes true
//     // which will return 1 otherwise 0 will be returned
//     return ((n & (1 << pos)) != 0);
// }

// // 5 = 0101
// // 1 << 2 = 0100
// // 0101 AND 0100 = 0100
// // 0100 = 4

// int main()
// {
//     cout << endl << endl;

//     cout << getBit(5, 2) << endl;

//     cout << endl << endl;
//     return 0;
// }

//^ Set bit at ith position

// #include<iostream>
// using namespace std;

// int setBit(int n, int pos)
// {
//     // left shift 1 by pos
//     // then OR it with the original binary number
//     // return the number
//     return (n | (1 << pos));
// }

// // 5 = 0101
// // 1 << 1 = 0010
// // 0101 OR 0010 = 0111
// // 0111 = 7

// int main()
// {
//     cout << endl << endl;

//     cout << setBit(5, 1) << endl;

//     cout << endl << endl;
//     return 0;
// }

//^ Clear bit at ith position

// #include<iostream>
// using namespace std;

// int clearBit(int n, int pos)
// {
//     // left shift 1 by pos
//     // complement the shifted number
//     // then AND it with the original binary number
//     // return the number
//     return (n & (~(1 << pos)));
// }

// // 5 = 0101
// // 1 << 2 = 0100
// // NOT 0100 = 1011
// // 0101 AND 1011 = 0001
// // 0001 = 7

// int main()
// {
//     cout << endl << endl;

//     cout << clearBit(5, 2) << endl;

//     cout << endl << endl;
//     return 0;
// }

//^ Update given bit at ith position

// #include<iostream>
// using namespace std;

// int updateBit(int n, int pos, int value)
// {
//     // left shift 1 by pos
//     // complement the shifted number
//     // then AND it with the original binary number
//     // return the number
//     int clear = (n & (~(1 << pos)));
//     int set = (clear | (value << pos));
//     return set;
// }

// // 5 = 0101
// // 1 << 2 = 0100
// // NOT 0100 = 1011
// // 0101 AND 1011 = 0001
// // 0001 = 7

// int main()
// {
//     cout << endl << endl;

//     cout << updateBit(5, 1, 1) << endl;

//     cout << endl << endl;
//     return 0;
// }

//^ Program to check if a given number is power of 2

// #include<iostream>
// using namespace std;

// bool check(int n)
// {
//     // AND original number with the previous number
//     // and if the result is 0 it means the number is power of 2
//     // so we will invert the result
//     // also we will add another base condition to ensure that our number is a non-zero value
//     int check = (n && !(n & (n - 1)));
//     return check;
// }

// // n = 8 = 1000
// // n - 1 = 7 = 0111
// // 1000 & 0111 = 0000 power of 2

// // n = 6 = 0110
// // n - 1 = 5 = 0101
// // 0110 & 0101 = 0100 not power of 2

// int main()
// {
//     cout << endl << endl;

//     cout << check(8) << endl;

//     cout << endl << endl;
//     return 0;
// }

//^ Program to count number of ones in binary representation of number

// #include<iostream>
// using namespace std;

// int check(int n)
// {
//     // looping until n is a non-zero value
//     // taking AND of original number with its previous number and updating the value of number (n)
//     // incrementing the counter
//     // on each loop single 1 from the binary representation will be deleted
//     int counter = 0;
//     while (n != 0)
//     {
//         n = (n & (n-1));
//         counter++;
//     }
//     return counter;
// }

// // n = 6 = 0110
// // n - 1 = 5 = 0101
// // 0110 & 0101 = 0100 counter incremented and value updated
// // n = 4 = 0100
// // n - 1 = 3 = 0011
// // 0100 & 0011 = 0000 counter incremented and value updated

// // returning 2 because we have 2 1's in our binary representation

// int main()
// {
//     cout << endl << endl;

//     cout << check(6) << endl;

//     cout << endl << endl;
//     return 0;
// }

//^ Program to generate all possible subsets of a set {a, b, c}

// #include<iostream>
// using namespace std;

// void possibleSubsets(int arr[], int n)
// {
//     for (int i = 0; i < (1 << n); i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (i & (1 << j))
//             {
//                 cout << arr[j] << " ";
//             }
//         }
//         cout << endl;

//     }
// }

// int main()
// {
//     cout << endl << endl;

//     int arr[] = {1, 2, 3, 4};
//     possibleSubsets(arr, 4);

//     cout << endl << endl;
//     return 0;
// }

//^ Program to return the rightmost 1 in the binary representation of a number.

// #include<iostream>
// using namespace std;

// int rightmost(int n)
// {
//    return (n ^ (n & (n - 1)));
// }
// // n = 10 = 1010
// // n & (n - 1) = 1010 & 1001 = 1000 = 8
// // n ^ 1000 = 1010 ^ 1000 = 0010
// // 0010 = position of rightmost bit is 2
// int main()
// {
//     cout << endl << endl;

//     cout << rightmost(10);

//     cout << endl << endl;
//     return 0;
// }

//^ Program to return one non-repeating element in an array

// #include <iostream>
// using namespace std;

// int unique(int arr[], int n)
// {
//     int x = 0;
//     for (int i = 0; i < n; i++)
//     {
//         x = x ^ arr[i];
//     }
//     return x;
// }

// int main()
// {
//     cout << endl
//          << endl;

//     int arr[] = {1, 2, 5, 4, 6, 8, 9, 2, 1, 4, 5, 8, 9};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     cout << unique(arr, size);

//     cout << endl
//          << endl;
//     return 0;
// }

//^ Program to return two non-repeating element in an array

// #include <iostream>
// using namespace std;

// void unique(int arr[], int n)
// {
//     int XOR = arr[0];
//     for (int i = 0; i < n; i++)
//     {
//         XOR = XOR ^ arr[i];
//     }

//     int rightBit = XOR & ~(XOR - 1);
//     int x = 0; // first unique number
//     int y = 0; // second unique number
//     for (int i = 0; i < n; i++)
//     {
//         if (rightBit & arr[i])
//         {
//             x = x ^ arr[i];
//         }
//         else
//         {
//             y = y ^ arr[i];
//         }        
//     }
//     cout << x << " " << y;

// }

// int main()
// {
//     cout << endl
//          << endl;

//     int arr[] = {1,2,3,2,1,4};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     unique(arr, size);

//     cout << endl
//          << endl;
//     return 0;
// }
//^ Program to return one non-repeating element in an array where all other elements are repeating thrice

#include <iostream>
using namespace std;

void unique(int arr[], int n)
{
    int tn = -1, tnp1 = 0, tnp2 = 0;

    for (int i = 0; i < n; i++)
    {
        int cwtn = arr[i] & tn;
        int cwtnp1 = arr[i] & tnp1;
        int cwtnp2 = arr[i] & tnp2;

        tn = tn & (~cwtn);
        tnp1 = tnp1 | cwtn;

        tnp1 = tnp1 & (~cwtnp1);
        tnp2 = tnp2 | cwtnp1;
        
        tnp2 = tnp2 & (~cwtnp2);
        tn = tn | cwtnp2;
    }

    cout << tnp1;
    

}

int main()
{
    cout << endl
         << endl;

    int arr[] = {1,2,3,4,1,2,3,1,2,3};
    int size = sizeof(arr) / sizeof(arr[0]);
    unique(arr, size);

    cout << endl
         << endl;
    return 0;
}
