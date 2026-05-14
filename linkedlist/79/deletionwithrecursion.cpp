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

Node *CreateLinkedList(int arr[], int index, int size)
{
  if (index == size)
    return NULL;
  Node *temp = new Node(arr[index]);
  temp->next = CreateLinkedList(arr, index + 1, size);
  return temp;
}

Node *deletenode(Node *curr, int x)
{
  if (x == 1)
  {
    Node *temp = curr->next;
    delete curr;
    return temp;
  }
  curr->next = deletenode(curr->next, x - 1);
  return curr;
}

int main()
{
  int arr[] = {1, 3, 4, 2, 5};
  Node *Head = CreateLinkedList(arr, 0, 5);

  Head = deletenode(Head, 3);

  Node *temp = Head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
}