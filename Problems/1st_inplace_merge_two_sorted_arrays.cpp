//~ Time Complexity
// O(nlogn) + O(n) + O(n)
//~ Space Complexity
// O(n)

#include <iostream>
#include <algorithm>
using namespace std;
void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";
}
int main()
{
    // first sorted array
    int arr1[] = {1, 4, 7, 8, 10};
    // second sorted array
    int arr2[] = {2, 3, 9};
    // size of first arr
    int n1 = sizeof arr1 / sizeof arr1[0];
    // size of second arr
    int n2 = sizeof arr2 / sizeof arr2[0];

    // size of third arr
    int n3 = n1 + n2;
    // third array
    int arr3[n3];

    // iterate from 0 to length of third array
    // copy the values of arr1 and arr2 to arr3
    for (int i = 0; i < n3; i++)
    {
        // copy elements of first array into third array
        if (i < n1)
        {
            arr3[i] = arr1[i];
        }
        // copy elements of second array into third array
        else
        {
            arr3[i] = arr2[i - n1];
        }
    }

    // buil-in sort method
    std::sort(arr3, arr3 + n3);

    // updating values of first and second array by the values in third array
    for (int i = 0; i < n3; i++)
    {
        if (i < n1)
        {
            arr1[i] = arr3[i];
        }
        else
        {
            arr2[i - n1] = arr3[i];
        }
    }

    cout << "arr1\n";
    printArr(arr1, n1);
    cout << "arr2\n";
    printArr(arr2, n2);
    cout << "arr3\n";
    printArr(arr3, n3);

    return 0;
}
