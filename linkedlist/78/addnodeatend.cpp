#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node(int value)
  {
    data = value;
    next = NULL;
  }
};

// Node *CreateLinkedList(int arr[], int index, int size)
// {
//   if (index == size)
//     return NULL;
//   Node *temp = new Node(arr[index]);
//   temp->next = CreateLinkedList(arr, index + 1, size);
//   return temp;
// }

Node *CreateLinkedList(int arr[], int index, int size, Node *prev)
{
  if (index == size)
    return prev;
  Node *temp = new Node(arr[index]);
  temp->next = prev;
  prev = temp;
  return CreateLinkedList(arr, index + 1, size, prev);
}

int main()
{
  int arr[] = {1, 3, 4, 2, 5};
  // Node *Head = CreateLinkedList(arr, 0, 5);

  Node *Head = CreateLinkedList(arr, 0, 5, NULL);

  Node *temp = Head;
  while (temp != NULL)
  {
    cout << temp->data << " " << temp->next << "\n";
    temp = temp->next;
  }
}