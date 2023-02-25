#include <iostream>
using namespace std;

void swap(int *fval, int *sval)
{
    int temp = *fval;
    *fval = *sval;
    *sval = temp;
}
int partition(int arr[], int l, int h)
{
    int pivot = arr[l];
    int i = l, j = h;

    while (i < j)
    {
        while (arr[i] <= pivot && i < j)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i < j)
        {
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[j], &arr[l]);
    return j;
}

void quickSort(int arr[], int l, int h)
{
    if (l < h)
    {
        int pivotIndx = partition(arr, l, h);

        quickSort(arr, l, pivotIndx - 1);
        quickSort(arr, pivotIndx + 1, h);
    }
}

int main()
{
    int arr[] = {4,6,2,5,7,9,1,3};
    int size = sizeof arr / sizeof arr[0];

    int f = 0, e = size - 1;
    cout << f << e << endl;
    quickSort(arr, f, e);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

