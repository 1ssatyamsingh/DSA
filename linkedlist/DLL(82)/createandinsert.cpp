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
  // Node *head = NULL;

  // insertion at start
  // if (head == NULL)
  // {
  //   head = new Node(6);
  // }
  // else
  // {
  //   Node *temp = new Node(6);
  //   temp->next = head;
  //   head->prev = temp;
  //   head = temp;
  // }

  // Insert at end
  // if (head == NULL)
  // {
  //   head = new Node(6);
  // }
  // else
  // {
  //   Node *tail = head;
  //   while (tail->next)
  //   {
  //     tail = tail->next;
  //   }
  //   Node *temp = new Node(7);
  //   temp->prev = tail;
  //   tail->next = temp;
  //   tail = temp;
  // }

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

  // INSERT at pos
  int pos = 3;
  if (pos == 0)
  {
    if (head == NULL)
    {
      head = new Node(6);
    }
    else
    {
      Node *temp = new Node(6);
      temp->next = head;
      head->prev = temp;
      head = temp;
    }
  }
  else
  {
    Node *curr = head;
    while (--pos)
    {
      curr = curr->next;
    }
    Node *temp = new Node(6);
    if (curr->next == NULL)
    {
      curr->next = temp;
      temp->prev = curr;
    }
    else
    {

      temp->next = curr->next;
      temp->prev = curr;
      curr->next = temp;
      temp->next->prev = temp;
    }
  }

  Node *temp = head;
  while (head != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
}
