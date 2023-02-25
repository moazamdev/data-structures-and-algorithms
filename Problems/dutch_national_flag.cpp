#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2,0,2,2,0,1,1};
    int n = 7;
    // {0,0,1j,1k,2i,2,2}
    // i will be used to traverse the arr, i will increment whenever arr[i] equals to 1
    // j will be swaped with i whenever arr[i] equals to the 0, j will increment
    // k will be swaped with i whenever arr[i] equals to the 2, k will decrement
    int i = 0, j = 0, k = n-1;
    while (i <= k)
    {
        if (arr[i] == 0)
        {
            swap(arr[i], arr[j]);
            i++;    j++;
        }
        else if (arr[i] == 1)
        {
            i++;
        }
        else if (arr[i] == 2)
        {
            swap(arr[i], arr[k]);
            k--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}
