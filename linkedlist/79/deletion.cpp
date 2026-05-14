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

int main()
{
  int arr[] = {1, 3, 4, 2, 5};
  Node *Head = CreateLinkedList(arr, 0, 5);

  // DELETE FROM START
  // if (Head != NULL)
  // {
  //   Node *temp = Head;
  //   Head = Head->next;
  //   delete temp;
  // }

  // DELETE FROM END
  // if (Head != NULL)
  // {
  //   if (Head->next == NULL)
  //   {
  //     Node *temp = Head;
  //     Head = Head->next;
  //     delete temp;
  //   }
  //   else
  //   {
  //     Node *curr = Head, *prev = NULL;
  //     while (curr->next != NULL)
  //     {
  //       prev = curr;
  //       curr = curr->next;
  //     }
  //     prev->next = curr->next;
  //     delete curr;
  //   }
  // }

  // DELETE A PARTICULAR NODE x
  int x = 3;
  if (x == 1)
  {
    Node *temp = Head;
    Head = Head->next;
    delete temp;
  }
  else
  {
    // x=3
    Node *curr = Head, *prev = NULL;
    x--;
    while (x--)
    {
      prev = curr;
      curr = curr->next;
    }
    prev->next = curr->next;
    delete curr;
  }

  Node *temp = Head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
}