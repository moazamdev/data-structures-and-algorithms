#include <iostream>
using namespace std;
void swap(int *fval, int *sval)
{
    int temp = *fval;
    *fval = *sval;
    *sval = temp;
}
int main()
{
    int arr[5] = {9, 5, 3, 2, 1};
    int size = sizeof arr / sizeof arr[0];

    for (int i = 0; i < size - 1; i++)
    {
        int min_indx = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[min_indx] > arr[j])
            {
                min_indx = j;
            }
        }
        swap(&arr[min_indx], &arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}