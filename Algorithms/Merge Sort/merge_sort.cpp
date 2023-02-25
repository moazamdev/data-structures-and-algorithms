#include <iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r)
{
    // for traversing left array elements from starting
    int i = l;
    // for traversing right array elements from starting
    int j = mid + 1;
    // for adding values to a temp array in a sorted manner 
    int k = l;
    // temporary arr
    // int size = l+r+1;
    int temp[7];
    // iterating until left and right subarrays are not overflowed
    while (i <= mid && j <= r)
    {
        // if left subarray element is smaller than right subarray element 
        if (arr[i] < arr[j])
        {
            // copying the smaller value and pasting it into the temp arr
            temp[k] = arr[i];
            // moving the left subarray pointer ahead
            i++;
        }
        // if right subarray element is smaller than left subarray element 
        else
        {
            // copying the smaller value and pasting it into the temp arr
            temp[k] = arr[j];
            // moving the right subarray pointer ahead
            j++;
        }
        // moving the temp array pointer ahead
        k++;
    }
    // if our left subarray is completed but there are some elements in right array
    if (i > mid)
    {
        // iterating until right subarray pointer is not overflowed
        while(j <= r)
        {
            // copying and pasting right subarray elements to the temp subarray
            temp[k] = arr[j];
            // moving ahead the temp pointer
            k++;
            // moving ahead the right subarray pointer
            j++;
        }
    }
    // if our right subarray is completed but there are some elements in left array
    else
    {
        // iterating until left subarray pointer is not overflowed
        while(i <= mid)
        {
            // copying and pasting left subarray elements to the temp subarray
            temp[k] = arr[i];
            // moving ahead the temp pointer
            k++;
            // moving ahead the right subarray pointer
            i++;
        }
    }
    // updating the original array by overiding the values of temp array
    for (int i = l; i <= r; i++)
    {
        arr[i] = temp[i];
    }
    
}

void mergeSort(int arr[], int l, int r)
{
    // if there are atleast two elements in the array
    if (l < r)
    {
        // calculating the mid point
        int mid = (l + r) / 2;
        // for left side
        mergeSort(arr, l, mid);
        // for right side
        mergeSort(arr, mid + 1, r);
        // merging both left and right subarrays to form a sorted array
        merge(arr, l, mid, r);
    }
}

void print(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {

    int arr[] = {9,4,7,6,3,1,5};
    // size
    int n = 7;
    // calculating left and right pointer
    int l = 0, r = n - 1;
    // calling function
    mergeSort(arr, l, r);
    
    print(arr,n);
    
    return 0;
}