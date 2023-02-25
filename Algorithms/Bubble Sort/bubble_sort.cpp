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
    int arr[5] = {9, 6, 4, 3, 2};
    int size = sizeof arr / sizeof arr[0];

    for (int i = 0; i < size - 1; i++)
    {
        bool flag = false;
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                flag = true;
            }
        }
        if (!flag)
        {
            break;
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " "; 
    }
    cout << endl;

    return 0;
}