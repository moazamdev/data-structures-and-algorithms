#include<iostream>
using namespace std;
int main()
{
    cout << endl << endl;
    
    int n; 
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[i] > arr[i + 1])
            {
                int tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i+1] = tmp;
            }
        }

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl << endl;
    return 0;
}