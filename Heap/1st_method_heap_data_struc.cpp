// !min heap

// #include <iostream>
// #include <vector>
// using namespace std;
// class Heap
// {
// private:
//     vector<int> heap;
//     void HeapifyUp(int index);
//     void HeapifyDown(int index);
//     void Swap(int *a, int *b);
//     int Left(int indx);
//     int Right(int indx);
//     int Parent(int indx);
//     int ExtractMin();

// public:
//     Heap() {}
//     void Insert(int data);
//     void Delete();
//     void Display();
//     void HeapSort();
// };
// int Heap::Left(int indx)
// {
//     int l = 2 * indx + 1;
//     if (l < heap.size())
//         return l;
//     else
//         return -1;
// }
// int Heap::Right(int indx)
// {
//     int r = 2 * indx + 2;
//     if (r < heap.size())
//         return r;
//     else
//         return -1;
// }
// int Heap::Parent(int indx)
// {
//     int p = (indx - 1) / 2;
//     if (indx == 0)
//         return -1;
//     else
//         return p;
// }
// void Heap::Swap(int *a, int *b)
// {
//     int t = *a;
//     *a = *b;
//     *b = t;
// }
// // from bottom to up
// void Heap::HeapifyUp(int indx)
// {
//     int p = (indx - 1) / 2;
//     if (indx >= 0 && p >= 0 && heap[indx] < heap[p])
//     {
//         Heap::Swap(&heap[indx], &heap[p]);
//         HeapifyUp(p);
//     }
// }
// // from up to bottom
// void Heap::HeapifyDown(int indx)
// {
//     int left_c = Left(indx);
//     int right_c = Right(indx);
//     if (left_c >= 0 && right_c >= 0 && heap[left_c] > heap[right_c])
//     {
//         // if the right child element is smaller than the left child element
//         // than store it in some variable (we can also use another variable, its up to you)
//         left_c = right_c;
//     }
//     if (left_c > 0)
//     {
//         Heap::Swap(&heap[indx], &heap[left_c]);
//         HeapifyDown(left_c);
//     }
// }
// void Heap::Insert(int data)
// {
//     if (heap.size() == 0)
//     {
//         heap.push_back(data);
//         return;
//     }
//     heap.push_back(data);
//     Heap::HeapifyUp((heap.size() - 1));
// }
// void Heap::Delete()
// {
//     if (heap.size() == 0)
//     {
//         cout << "Heap is Empty" << endl;
//         return;
//     }
//     heap[0] = heap.at(heap.size() - 1);
//     heap.pop_back();
//     HeapifyDown(0);
//     // cout << "Element Deleted" << endl;
// }
// int Heap::ExtractMin()
// {
//     int min = heap.front();
//     if (heap.size() == 0) return -1;
//     else return min;
// }
// void Heap::HeapSort()
// {
//     int size = heap.size();
//     cout << "Heap Sort Min: ";
//     for (int i = 0; i < size; ++i)
//     {
//         cout << ExtractMin() << "->";
//         Delete();
//     }
//     cout << endl;
// }
// void Heap::Display()
// {
//     if (heap.size() == 0) {
//         cout << "Heap is empty" << endl;
//         return;
//     }
//     for (auto i = heap.begin(); i != heap.end(); ++i)
//         cout << *i << "->";
//     cout << endl;
// }
// int main()
// {
//     cout << endl
//          << endl;
//     Heap h;
//     h.Insert(3);
//     h.Insert(6);
//     h.Insert(2);
//     h.Insert(1);
//     h.Insert(9);
//     h.Insert(12);
//     h.Insert(63);
//     h.Insert(10);
//     h.Insert(5);
//     h.Insert(4);
//     h.Display();
//     // 1->2->3->4->5->6->9->10->12->63->
//     // h.Delete();
//     // h.Display();

//     // h.Delete();

//     h.HeapSort();
//     h.Display();
//     cout << endl
//          << endl;
//     return 0;
// }




// !max heap

// #include <iostream>
// #include <vector>
// using namespace std;
// class Heap
// {
// private:
//     vector<int> heap;
//     void HeapifyUp(int index);
//     void HeapifyDown(int index);
//     void Swap(int *a, int *b);
//     int Left(int indx);
//     int Right(int indx);
//     int Parent(int indx);

// public:
//     Heap() {}
//     void Insert(int data);
//     void Delete();
//     void Display();
// };
// int Heap::Left(int indx)
// {
//     int l = 2 * indx + 1;
//     if (l < heap.size())
//         return l;
//     else
//         return -1;
// }
// int Heap::Right(int indx)
// {
//     int r = 2 * indx + 2;
//     if (r < heap.size())
//         return r;
//     else
//         return -1;
// }
// int Heap::Parent(int indx)
// {
//     int p = (indx - 1) / 2;
//     if (indx == 0)
//         return -1;
//     else
//         return p;
// }
// void Heap::Swap(int *a, int *b)
// {
//     int t = *a;
//     *a = *b;
//     *b = t;
// }
// // from bottom to up
// void Heap::HeapifyUp(int indx)
// {
//     int p = (indx - 1) / 2;
//     if (indx >= 0 && p >= 0 && heap[indx] > heap[p])
//     {
//         Heap::Swap(&heap[indx], &heap[p]);
//         HeapifyUp(p);
//     }
// }
// // from up to bottom
// void Heap::HeapifyDown(int indx)
// {
//     int left_c = Left(indx);
//     int right_c = Right(indx);
//     if (left_c >= 0 && right_c >= 0 && heap[left_c] < heap[right_c])
//     {
//         // if the right child element is greater than the left child element
//         // than store it in some variable (we can also use another variable, its up to you)
//         left_c = right_c;
//     }
//     if (left_c > 0)
//     {
//         Heap::Swap(&heap[indx], &heap[left_c]);
//         HeapifyDown(left_c);
//     }
// }
// void Heap::Insert(int data)
// {
//     heap.push_back(data);
//     Heap::HeapifyUp((heap.size() - 1));
// }
// void Heap::Delete()
// {
//     if (heap.size() == 0)
//     {
//         cout << "Heap is Empty" << endl;
//         return;
//     }
//     heap[0] = heap.at(heap.size() - 1);
//     heap.pop_back();
//     HeapifyDown(0);
//     cout << "Element Deleted" << endl;
// }
// void Heap::Display()
// {
//     for (auto i = heap.begin(); i != heap.end(); ++i)
//         cout << *i << "->";
//     cout << endl;
// }
// int main()
// {
//     cout << endl
//          << endl;
//     Heap h;
//     h.Insert(3);
//     h.Insert(6);
//     h.Insert(2);
//     h.Insert(1);
//     h.Insert(9);
//     h.Display();

//     h.Delete();
//     h.Display();

//     h.Delete();
//     h.Display();

//     cout << endl
//          << endl;
//     return 0;
// }