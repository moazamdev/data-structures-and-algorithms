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

    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j  = 0;
        // this for loop is for shifting values to create a space to insert new value
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > key)
            {
                arr[j + 1] = arr[j];
            }
        }
        // overriding the inserted value to its right position
        arr[j + 1] = key;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}


// #include <iostream>
// using namespace std;
// void swap(int *fval, int *sval)
// {
//     int temp = *fval;
//     *fval = *sval;
//     *sval = temp;
// }
// int main()
// {
//     int arr[5] = {9, 6, 4, 3, 2};
//     int size = sizeof arr / sizeof arr[0];

//     for (int i = 1; i < size; i++)
//     {
//         int key = arr[i];
//         int j  = i - 1;
//         while (j >= 0 && arr[j] > arr[i])
//         {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = key;
//     }

//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }