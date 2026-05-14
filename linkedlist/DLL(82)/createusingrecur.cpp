#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node *prev;
  Node(int val)
  {
    data = val;
    next = NULL;
    prev = NULL;
  }
};

Node *createDLL(int arr[], int size, int index, Node *back)
{
  if (index == size)
  {
    return nullptr;
  }
  Node *temp = new Node(arr[index]);
  temp->prev = back;
  temp->next = createDLL(arr, size, index + 1, temp);
  return temp;
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5};

  Node *head = createDLL(arr, 5, 0, NULL);

  Node *temp = head;
  while (head != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
}