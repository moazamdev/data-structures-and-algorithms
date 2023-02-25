#include <iostream>
using namespace std;

void max_heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if (left <= n && arr[left] > arr[largest])
    {
        largest = left;
    }
    if (right <= n && arr[right] > arr[largest])
    {
        largest = right;
    }
    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        max_heapify(arr, n, largest);
    }
}
void heapsort(int arr[], int n)
{
    for (int i = n; i >= 1; i--)
    {
        swap(arr[1], arr[i]);
        max_heapify(arr, i-1, 1);
    }
}

int main()
{
    // int arr[6] = {-1, 77, 44, 65, 98, 22};
    int arr[] = {-1, 30, 18, 20, 8, 40, 19, 29};
    int n = 7;
    
    for (int i = n / 2; i >= 1; i--)
    {
        max_heapify(arr, n, i);
    }
    
    cout << "Before: "; 
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    heapsort(arr, n);
    cout << "After: "; 
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }

}


