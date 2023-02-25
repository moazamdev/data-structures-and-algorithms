#include <iostream>
using namespace std;
class Heap
{
public:
    int arr[100];
    int size;

    Heap()
    {
        size = 0;
    }

    void insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val;

        while (index > 1)
        {
            int parent = index / 2;
 
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }

            else
            {
                return;
            }
        }
    }

    void deleteheap()
    {
        if (size == 0)
        {
            cout << "empty Heap";
        }

        arr[1] = arr[size];
        size--;

        int i = 1;
        while (i < size)
        {
            int leftindex = 2 * i;
            int rightindex = 2 * i + 1;
            int max = leftindex;
            
            if (arr[i] > arr[leftindex] && arr[i] > arr[rightindex]) break;    

            if (arr[leftindex] < arr[rightindex])
            {
                max = rightindex;
            }
            swap(arr[max], arr[i]);
            i = max;

        }

        // while (i < size)
        // {
        //     int rightindex = 2 * i + 1;
        //     int leftindex = 2 * i;

        //     if (arr[leftindex] > arr[i])
        //     {
        //         swap(arr[leftindex], arr[i]);
        //         i = leftindex;
        //     }

        //     if (arr[rightindex] > arr[i])
        //     {
        //         swap(arr[leftindex], arr[i]);
        //         i = rightindex;
        //     }

        //     else
        //         return;
        // }
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
    }
};

void max_heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    
    if (left <= n && arr[left] > arr[largest])
    {
        largest = left;
    }
    if (right <= n && arr[right] > arr[largest])
    {
        largest = right;
    }

    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        max_heapify(arr, n, largest);
    }
}

int main()
{

    // for inserting & deleting in heap
    Heap h;
    h.insert(30);
    h.insert(18);
    h.insert(20);
    h.insert(8);
    h.insert(40);
    h.insert(9);
    h.insert(29);
    h.print();
    h.deleteheap(); cout << endl;
    h.print();

    cout << endl
         << endl;

    // for max_heapify
    // int arr[6] = {-1, 60, 27, 24, 67, 99};
    int arr[] = {-1, 30,18,20,8,40,9,29};

    int n = 7;
    for (int i = n / 2; i >= 1; i--)
    {
        max_heapify(arr, n, i);
    }
    cout << "printing heapify max array" << endl;
    for (int j = 1; j <= n; j++)
    {
        cout << arr[j] << " ";
    }
    cout << endl;
}