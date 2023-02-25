#include<iostream>
using namespace std;

void inputArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}

void outputArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int main()
{
    cout << endl << endl;
    
    int n;
    cin >> n;
    int arr[n];
    inputArr(arr, n);

    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (arr[j] > key && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    outputArr(arr, n);
    cout << endl << endl;
    return 0;
}