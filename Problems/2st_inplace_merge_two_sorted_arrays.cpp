//~ Time Complexity
// O(n1 * n2)
//~ Space Complexity
// O(1)

#include <iostream>
#include <algorithm>
using namespace std;
void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";
}
void swap(int *fval, int *sval)
{
    int t = *fval;
    *fval = *sval;
    *sval = t;
}
int main()
{
    // int arr1[] = {1,4,7,8,10};
    // int arr2[] = {2,3,9};
    // first array
    int arr1[] = {1, 5, 9, 10, 15, 20};
    // second array
    int arr2[] = {2, 3, 8, 13};
    // size of first array
    int n1 = sizeof arr1 / sizeof arr1[0];
    // size of second array
    int n2 = sizeof arr2 / sizeof arr2[0];

    // iterate through lenght of first array
    for (int i = 0; i < n1; i++)
    {
        // if the ith index element of first array is greater
        // than the first (0th index) element of the second array
        if (arr1[i] > arr2[0])
        {
            // then swap the values
            swap(&arr1[i], &arr2[0]);
            // and sort the second array
            sort(arr2, arr2 + n2);
            // and keep repeating the process
            // until the lenght of first array
        }
    }

    cout << "arr1\n";
    printArr(arr1, n1);
    cout << "arr2\n";
    printArr(arr2, n2);
    return 0;
}
