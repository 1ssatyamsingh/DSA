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

int main()
{

  // ARRAY TO DLL
  int arr[] = {1, 2, 3, 4, 5};

  Node *head = NULL, *tail = NULL;
  for (int i = 0; i < 5; i++)
  {
    if (head == NULL)
    {
      head = tail = new Node(arr[i]);
    }
    else
    {
      Node *temp = new Node(arr[i]);
      tail->next = temp;
      temp->prev = tail;
      tail = temp;
    }
  }

  // DELETION AT START
  // if (head != NULL)
  // {
  //   Node *temp = head;
  //   head = head->next;
  //   head->prev = NULL;
  //   delete temp;
  // }

  // DELETION FROM END
  // if (head != NULL)
  // {
  //   if (head->next == NULL)
  //   {
  //     delete head;
  //     head = NULL;
  //   }
  //   Node *temp = head;
  //   while (temp->next)
  //   {
  //     temp = temp->next;
  //   }
  //   temp->prev->next = NULL;
  //   delete temp;
  // }

  // DELETE FROM A GIVEN POS
  int pos = 3;
  if (pos == 1)
  {
    Node *temp = head;
    head = head->next;
    if (head)
      head->prev = NULL;
    delete temp;
  }
  else
  {
    Node *curr = head;
    while (--pos)
    {
      curr = curr->next;
    }
    if (curr->next == NULL)
    {
      curr->prev->next = NULL;
      delete curr;
    }
    else
    {
      curr->prev->next = curr->next;
      curr->next->prev = curr->prev;
      delete curr;
    }
  }

  Node *temp = head;
  while (head != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
}
