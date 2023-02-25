//~ Maximum Subarray Sum

// #include<iostream>
// #include<climits>
// #include<algorithm>
// using namespace std;

// void inputArr(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];
// }

// int main()
// {
//     cout << endl << endl;
    
//     // declaring inputs and taking values from the user
//     int n;
//     cin >> n;
//     int arr[n];
//     inputArr(arr, n);


//     //* Brute Force Approach O(n^3)

//     // int maxNum = INT_MIN;
//     // for (int i = 0; i < n; i++)
//     // {
//     //     for (int j = i; j < n; j++)
//     //     {
//     //         int sum = 0;
//     //         for (int k = i; k <= j; k++)
//     //         {
//     //             sum += arr[k];
//     //             // cout << arr[k] << " ";
//     //         }
//     //         maxNum = max(maxNum, sum);
//     //         // cout << endl;
//     //     }
//     // }
//     // cout << maxNum << endl;


//     //* Brute Force Approach O(n^2)

//     // int maxNum = INT_MIN;
//     // for (int i = 0; i < n; i++)
//     // {
//     //     int sum = 0;
//     //     for (int j = i; j < n; j++)
//     //     {
//     //         sum += arr[j];
//     //         maxNum = max(maxNum, sum);
//     //     }
//     // }
//     // cout << maxNum << endl;


//     //* Kadane's Algorithm O(n)

//     // int maxNum = INT_MIN;
//     // int currSum = 0;
//     // // iterating through each element of the array
//     // for (int i = 0; i < n; i++)
//     // {
//     //     // adding the currnt array value into the current sum variable 
//     //     currSum += arr[i];
//     //     // if the resulting current sum value is a negative value than reset the sum variable to 0
//     //     if (arr[i] < 0)
//     //     {
//     //         currSum = 0;
//     //     }
//     //     // calculating the maximum of two values 
//     //     maxNum = max(maxNum, currSum);
//     // }
//     // cout << maxNum << endl;


//     cout << endl << endl;
//     return 0;
// }







//~ Maximum Circular Subarray Sum

// #include<iostream>
// #include<climits>
// #include<algorithm>
// using namespace std;

// void inputArr(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];
// }

// int kadanes_algo(int arr[], int n)
// {
//     int maxNum = INT_MIN;
//     int currSum = 0;
//     // iterating through each element of the array
//     for (int i = 0; i < n; i++)
//     {
//         // adding the currnt array value into the current sum variable 
//         currSum += arr[i];
//         // if the resulting current sum value is a negative value than reset the sum variable to 0
//         if (arr[i] < 0)
//         {
//             currSum = 0;
//         }
//         // calculating the maximum of two values 
//         maxNum = max(maxNum, currSum);
//     }
//     return maxNum;
// }



// int main()
// {
//     cout << endl << endl;
    
//     // declaring inputs and taking values from the user
//     int n;
//     cin >> n;
//     int arr[n];
//     inputArr(arr, n);

//     int wrapSum = 0, noWrapSum = 0;

//     noWrapSum = kadanes_algo(arr, n);

//     int totalArraySum = 0, SumNonContrib = 0;
//     for (int i = 0; i < n; i++)
//     {
//         totalArraySum += arr[i];
//         arr[i] = -arr[i];
//     }
//     SumNonContrib = kadanes_algo(arr, n);
    
//     wrapSum = totalArraySum + SumNonContrib;
    
//     cout << noWrapSum << endl;
//     cout << wrapSum << endl;

//     cout << endl << endl;
//     return 0;
// }






//~ Pair Sum Problem

#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

void inputArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}

bool pair_sum(int arr[], int n, int k)
{

    //* Brute Force Approach O(n^2)

    // Array must be sorted
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[i] + arr[j] == k)
    //         {
    //             cout << i << " " << j << endl;
    //             return true;
    //         }
    //     }
    // }
    // return false;

    //* Brute Force Approach O(n)

    // Array must be sorted
    // creating two pointer 
    // setting the low pointer to starting index of the array
    // setting the high pointer to last index of the array
    int low = 0, high = n-1;
    // loop until the low is less than high (iterate through each pair in the array)
    while (low < high)
    {
        // checking equality condition 
        if (arr[low] + arr[high] == k)
        {
            return true;
        }
        // if the sum is low it means we want to add some bigger value
        else if (arr[low] + arr[high] < k)
        {
            low++;
        }
        // if the sum is high than we need to subtract value
        else
        {
            high--;
        }
    }
    return false;
}

int main()
{
    cout << endl << endl;
    
    // declaring inputs and taking values from the user
    int k = 31;
    int arr[] = {2,4,7,11,14,16,20,21};
    // inputArr(arr, 8);

    cout << pair_sum(arr, 8, k) << endl;

    cout << endl << endl;
    return 0;
}
