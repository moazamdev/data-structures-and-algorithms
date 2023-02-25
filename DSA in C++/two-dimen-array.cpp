//~ Spiral Order Matrix Traversal

// #include<iostream>
// using namespace std;
// int main()
// {
//     cout << endl << endl;
    
//     int n, m;
//     cin >> n >> m;
//     int arr[n][m];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> arr[i][j];
//         }   
//     }

//     int row_start = 0, row_end = n - 1;
//     int col_start = 0, col_end = m - 1;

//     while (row_start <= row_end && col_start <= col_end)
//     {
//         for (int col = col_start; col <= col_end; col++)
//         {
//             cout << arr[row_start][col] << " ";
//         }
//         // cout << endl;
//         row_start++;

//         for (int row = row_start; row <= row_end; row++)
//         {
//             cout << arr[row][col_end] << " ";
//         }
//         // cout << endl;
//         col_end--;

//         for (int col = col_end; col >= col_start; col--)
//         {
//             cout << arr[row_end][col] << " ";
//         }
//         // cout << endl;
//         row_end--;

//         for (int row = row_end; row >= row_start; row--)
//         {
//             cout << arr[row][col_start] << " ";
//         }
//         // cout << endl;
//         col_start++;
//     }

//     cout << endl << endl;
//     return 0;
// }



//~ Transpose of matrix

// #include<iostream>
// using namespace std;
// int main()
// {
//     cout << endl << endl;
    
//     int n, m;
//     cin >> n >> m;
//     int arr[n][m];

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> arr[i][j];
//         }   
//     }

//     int tmp;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < m; j++)
//         {
//             tmp = arr[j][i];
//             arr[j][i] = arr[i][j];
//             arr[i][j] = tmp;
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout << arr[i][j] << " ";
//         }   
//         cout << endl;
//     }

//     cout << endl << endl;
//     return 0;
// }



//~ Matrix Multiplication

// #include<iostream>
// using namespace std;

// int main()
// {
//     cout << endl << endl;
    
//     int n1, n2, n3;
//     cin >> n1 >> n2 >> n3;
//     int arr1[n1][n2];
//     int arr2[n2][n3];
//     int mul_arr[n1][n3];



//     for (int i = 0; i < n1; i++)
//     {
//         for (int j = 0; j < n3; j++)
//         {
//             mul_arr[i][j] = 0;
//         }
//     }
//     for (int i = 0; i < n1; i++)
//     {
//         for (int j = 0; j < n2; j++)
//         {
//             cin >> arr1[i][j];
//         }
//     }
//     for (int i = 0; i < n2; i++)
//     {
//         for (int j = 0; j < n3; j++)
//         {
//             cin >> arr2[i][j];
//         }
//     }

//     for (int i = 0; i < n1; i++)
//     {
//         for (int j = 0; j < n3; j++)
//         {
//             for (int k = 0; k < n2; k++)
//             {
//                 mul_arr[i][j] += arr1[i][k] * arr2[k][j];
//             }
//         }
//     }

//     for (int i = 0; i < n1; i++)
//     {
//         for (int j = 0; j < n3; j++)
//         {
//             cout << mul_arr[i][j] << " ";
//         }
//         cout << endl;
//     }
    
//     cout << endl << endl;
//     return 0;
// }




//~ Matrix Multiplication

#include<iostream>
using namespace std;

int main()
{
    cout << endl << endl;
    
    int n, m;
    cin >> n >> m ;
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int target;
    cin >> target;
    bool flag = false;

    //* O(n^2)

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == target)
            {
                flag = true;
            }
        }
    }

    //* O(n)

    // int r = n-1, c = 0;
    // while (r >= 0 && c < m)
    // {
    //     if (arr[r][c] == target)
    //     {
    //         flag = true;
    //     }
    //     else if (arr[r][c] > target)
    //     {
    //         c++;
    //     }
    //     else
    //     {
    //         r--;
    //     }
    // }
    
    if (flag)
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;
    
    cout << endl << endl;
    return 0;
}