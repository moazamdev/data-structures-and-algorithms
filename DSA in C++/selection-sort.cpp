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
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp; 
            }
        }
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl << endl;
    return 0;
}