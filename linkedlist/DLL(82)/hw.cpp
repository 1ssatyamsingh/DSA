#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node *prev;
  Node(int value)
  {
    data = value;
    next = NULL;
    prev = NULL;
  }
};

Node *createDLL(int arr[], int index)
{
  if (index < 0)
    return NULL;
  Node *temp = createDLL(arr, index - 1);
  Node *newNode = new Node(arr[index]);
  newNode->next = temp;
  if (temp != NULL)
  {
    temp->prev = newNode;
  }
  return newNode;
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  Node *head = createDLL(arr, 4);

  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
}