#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int startingPoint = 0, endingPoint = n;
    int mid;
    while (startingPoint <= endingPoint)
    {
        mid = (startingPoint + endingPoint) / 2;
        if (key == arr[mid])
            return mid;
        else if (key < arr[mid])
            endingPoint = mid - 1;
        else
            startingPoint = mid + 1;
    }
    return -1;
}
int main()
{
    cout << endl << endl;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    int key;
    cin >> key;

    cout << binarySearch(arr, n, key) << endl;
    cout << endl << endl;
    return 0;
}