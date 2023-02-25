// // Linked List

// #include<iostream>
// using namespace std;
// class Node
// {
//     public:
//     int data;
//     Node* next;
//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };
// void insertAtHead(Node*& head, int data)
// {
//     Node* newNode = new Node(data);
//     if (head == NULL)
//     {
//         head = newNode;
//         return;
//     }
//     newNode->next = head;
//     head = newNode;
// }
// void insertAtTail(Node*& head, int data)
// {
//     Node* newNode = new Node(data);
//     if (head == NULL)
//     {
//         head = newNode;
//         return;
//     }
//     Node* temp = head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next = newNode;
// }
// void insertAtNth(Node*& head, int data, int pos)
// {
//     Node* newNode = new Node(data);
//     if (head == NULL)
//     {
//         head = newNode;
//         return;
//     }
//     if (pos == 0)
//     {
//         newNode->next = head;
//         head = newNode;
//         return;
//     }
//     Node* temp = head;
//     for (int i = 0; i < pos-1; i++)
//     {
//         if (temp->next != NULL)
//         {
//             temp = temp->next;
//         }
//     }
//     newNode->next = temp->next;
//     temp->next = newNode;
// }
// void searching(Node* head, int data)
// {
//     Node* temp = head;
//     bool flag = false;
//     while (temp != NULL)
//     {
//         if (data == temp->data)
//         {
//             flag = true;
//             break;
//         }
//         temp = temp->next;
//     }
//     (flag) ? cout << "Found\n" : cout << "Not found\n";
// }
// void deleteAtHead(Node*& head)
// {
//     if (head == NULL) return;
//     Node* temp = head;
//     head = head->next;
//     free(temp);
// }
// void deleteAtTail(Node*& head)
// {
//     if (head == NULL) return;
//     Node* temp = head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp = temp->next;
//     free(temp);
// }
// void deleteAtNth(Node*& head, int pos)
// {
//     if (head == NULL) return;

//     if (pos == 0)
//     {
//         head = head->next;
//         return;
//     }

//     Node* prev = head;
//     for (int i = 0; i < pos-1; i++)
//     {
//         prev = prev->next;
//     }
//     Node* temp = prev->next;
//     prev->next = temp->next;
//     free(temp);
// }
// void display(Node* head)
// {
//     Node* temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << "->";
//         temp = temp->next;
//     }
//     cout << "NULL\n";
// }
// int main()
// {
//     cout << endl << endl;
//     // creating head pointer
//     Node *head = NULL;

//     insertAtHead(head, 1);
//     insertAtHead(head, 1);
//     insertAtHead(head, 1);
//     display(head);

//     insertAtTail(head, 2);
//     insertAtTail(head, 2);
//     insertAtTail(head, 2);
//     display(head);

//     insertAtNth(head, 3, 3);
//     insertAtNth(head, 3, 3);
//     insertAtNth(head, 3, 3);
//     display(head);

//     deleteAtHead(head);
//     display(head);

//     deleteAtTail(head);
//     display(head);

//     deleteAtNth(head, 3);
//     display(head);

//     searching(head, 3);
//     searching(head, 7);

//     cout << endl << endl;
//     return 0;
// }

// Stack

// #include<iostream>
// using namespace std;
// const int N = 10;
// int stack[N];
// int top = -1;
// void Push(int data)
// {
//     if (top == N-1)
//     {
//         cout << "stack overflow\n";
//         return;
//     }
//     stack[++top] = data;
// }
// void Pop()
// {
//     if (top == -1)
//     {
//         cout << "stack underflow\n";
//         return;
//     }
//     top--;
// }
// int Top()
// {
//     return stack[top];
// }
// void display()
// {
//     for (int i = 0; i <= top; i++)
//     {
//         cout << stack[i] << " ";
//     }
//     cout << endl;
// }
// int main()
// {
//     cout << endl << endl;
//     Push(2);
//     Push(3);
//     Push(4);
//     cout << Top() << endl;
//     Pop();
//     Pop();
//     cout << Top() << endl;
//     display();

//     cout << endl << endl;
//     return 0;
// }

// Queue
// #include<iostream>
// using namespace std;
// const int N = 10;
// int queue[N];
// int front = -1, rear = -1;
// void enqueue(int data)
// {
//     if (front == -1 && rear == -1)
//     {
//         front = rear = 0;
//     }
//     else if (rear == N-1)
//     {
//         cout << "Queue full\n";
//         return;
//     }
//     else {
//         rear++;
//     }
//     queue[rear] = data;
// }
// int dequeue()
// {
//     if (front == -1 && rear == -1)
//     {
//         return -1;
//     }
//     else if (front == rear)
//     {
//         front = rear = 0;
//     }
//     else
//     {
//         front++;
//     }
//     return queue[front];
// }
// void Print()
// {
//     for (int i = front; i <= rear; i++)
//     {
//         cout << queue[i] << " ";
//     }
//     cout << endl;
// }
// int main()
// {
//     cout << endl << endl;
//     enqueue(2); Print();
//     enqueue(3); Print();
//     enqueue(4); Print();
//     enqueue(5); Print();
//     dequeue(); Print();
//     dequeue(); Print();
//     dequeue(); Print();

//     cout << endl << endl;
//     return 0;
// }

// Binary Search Tree

// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;
//     Node(int data)
//     {
//         this->data = data;
//         this->left = this->right = NULL;
//     }
// };
// void insert(Node *&root, int data)
// {
//     if (root == NULL)
//     {
//         Node *newNode = new Node(data);
//         root = newNode;
//         return;
//     }
//     else if (data <= root->data)
//     {
//         insert(root->left, data);
//     }
//     else if (data > root->data)
//     {
//         insert(root->right, data);
//     }
//     else
//     {
//         return;
//     }
// }
// bool search(Node *&root, int data)
// {
//     if (root == NULL)
//     {
//         return false;
//     }
//     else if (data == root->data)
//     {
//         return true;
//     }
//     else if (data <= root->data)
//     {
//         search(root->left, data);
//     }
//     else
//     {
//         search(root->right, data);
//     }
// }
// Node *calMinNode(Node *root)
// {
//     Node *temp = root;
//     while (temp && temp->left != NULL)
//     {
//         temp = temp->left;
//     }
//     return temp;
// }
// Node *deleteNode(Node *root, int key)
// {
//     if (root == NULL)
//     {
//         return root;
//     }
//     if (key < root->data)
//     {
//         root->left = deleteNode(root->left, key);
//     }
//     else if (key > root->data)
//     {
//         root->right = deleteNode(root->right, key);
//     }
//     else
//     {
//         if (root->left == NULL && root->right == NULL)
//         {
//             return NULL;
//         }
//         else if (root->left != NULL && root->right == NULL)
//         {
//             Node* temp = root->left;
//             free(root);
//             return temp;
//         }
//         else if (root->left == NULL && root->right != NULL)
//         {
//             Node* temp = root->right;
//             free(root);
//             return temp;
//         }
//         Node* temp = calMinNode(root->right);
//         root->data = temp->data;
//         root->right = deleteNode(root->right, temp->data); 
//     }
//     return root;
// }
// void print(Node *root)
// {
//     Node *temp = root;
//     if (temp == NULL)
//     {
//         return;
//     }
//     cout << temp->data << "->";
//     print(temp->left);
//     print(temp->right);
// }
// int main()
// {
//     Node *root = NULL;

//     insert(root, 15);
//     insert(root, 10);
//     insert(root, 20);
//     insert(root, 25);
    
//     deleteNode(root, 15);
    
//     // int target = 25;
//     // if (search(root, target))
//     //     cout << "found\n";
//     // else
//     //     cout << "not found\n";
//     print(root);
//     return 0;
// }