//~ Maximum number at ith index in an array

// #include<iostream>
// #include<climits>
// using namespace std;

// void inputArr(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];
// }

// void outputArr(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     cout << endl;
// }

// int main()
// {
//     cout << endl << endl;
    
//     int n;
//     cin >> n;
//     int arr[n];
//     inputArr(arr, n);

//     int maxNum = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         maxNum = max(maxNum, arr[i]);
//         cout << maxNum << endl;
//     }

//     cout << endl << endl;
//     return 0;
// }



//~ Sum of all subarrays

// #include<iostream>
// #include<climits>
// using namespace std;

// void inputArr(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];
// }

// int main()
// {
//     cout << endl << endl;
    
//     int n;
//     cin >> n;
//     int arr[n];
//     inputArr(arr, n);

//     int currSum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         currSum = 0;
//         for (int j = i; j < n; j++)
//         {
//             currSum += arr[j];
//             cout << currSum << endl;
//         }
//         cout << endl;
//     }
    

//     cout << endl << endl;
//     return 0;
// }



//~ Longest Arithmetice Subarray

// #include<iostream>
// #include<climits>
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

//     // initialising current length to 2 because we have already calculated the common difference of first two values
//     int currLen = 2;
//     int prevDiff = arr[1] - arr[0];
//     // common difference can be taken between two values
//     int result = 0;
//     // starting loop through 3 element of the array because common difference of first two values of the array is already taken
//     for (int i = 2; i < n; i++)
//     {
//         // if the previous common difference matches the current common difference
//         if (prevDiff == arr[i] - arr[i-1])
//         {
//             // increment the value if the value matches
//             currLen++;
//         }
//         else 
//         {
//             // Setting new values to the previous difference
//             prevDiff = arr[i] - arr[i-1];
//             // reset the current length because common difference does not matched with previous common difference
//             currLen = 2;
//         }
//         // Calculating the maximum value between the last calculated result value and the continous length 
//         result = max(result, currLen);
//     }
//     // Printing the maximum length
//     cout << result << endl;
    

//     cout << endl << endl;
//     return 0;
// }



// //~ Longest Arithmetice Subarray

// #include<iostream>
// #include<climits>
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

//     if (n == 1)
//     {
//         cout << "Atleast two elements" << endl;
//         return 0;
//     }

//     int maxNum = INT_MIN;
//     int rec_break_day = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > maxNum && arr[i] > arr[i+1])
//         {
//             rec_break_day++;
//             maxNum = max(maxNum, arr[i]);
//         }
//     }
//     cout << rec_break_day << endl;
    

//     cout << endl << endl;
//     return 0;
// }



//~ Index of first repeating element

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

//     int indexArr[n];
//     fill(indexArr, indexArr + n, -1);
//     for (int i = 0; i < n; i++)
//         cout << indexArr[i] << " ";
//     inputArr(arr, n);

//     int minIndx = INT_MAX;
//     for (int i = 0; i < n; i++)
//     {
//         if (indexArr[arr[i]] != -1)
//         {
//             minIndx = min(minIndx, indexArr[arr[i]]);
//         }
//         else
//         {
//             indexArr[arr[i]] = i;
//         }
//     }

//     if (minIndx == INT_MAX)
//     {
//         cout << "-1" << endl;
//         return 0;
//     }
//     else
//     {
//         cout << minIndx  << endl;
//     }
    

//     cout << endl << endl;
//     return 0;
// }




// //~ Subarray with given sum

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
//     int n, SUM;
//     cin >> SUM;
//     cin >> n;
//     int arr[n];
//     inputArr(arr, n);

//     int s = 0;
//     int e = 1;
//     int currSum = arr[0];
    
//     while (s < e)
//     {
//         if (currSum == SUM)
//         {
//             cout << s << " " << e << endl;
//             break;
//         }
//         currSum += arr[e];
//         if (currSum < SUM)
//         {
//             e++;
//         }
//         if (currSum > SUM)
//         {
//             currSum -= arr[s];
//             s++;
//         }
//     }

//     cout << endl << endl;
//     return 0;
// }




//~ Smallest Positive Missing Number

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

//     int result;
//     bool check[n];
//     fill(check, check + n, false);

//     int i = 0, j = 0;
//     while (i < n)
//     {
//         if (arr[i] >= 0)
//         {
//             check[arr[i]] = true;
//         }
//         i++;
//     }
//     while (j < n)
//     {
//         if (check[j] == false)
//         {
//             result = j;
//             break;
//         }
//         j++;
//     }
//     cout << result << endl;


//     cout << endl << endl;
//     return 0;
// }

