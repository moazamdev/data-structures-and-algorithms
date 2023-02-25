#include<iostream>
using namespace std;

int linearSearch(int key, int arr[], int n)
{
    int j;
    for (j = 0; j < n; j++)
    {
        if (arr[j] == key)
            return j;
    }
    return -1;
}

int main()
{
    cout << endl << endl;

    int n, j;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cin >> key;

    cout << linearSearch(key, arr, n);
    
    cout << endl << endl;
    return 0;
}