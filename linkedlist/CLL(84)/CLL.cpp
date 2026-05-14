#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node(int val)
  {
    data = val;
    next = NULL;
  }
};

int main()
{
  int arr[] = {1, 2, 3, 4, 5};

  Node *head = NULL, *tail = NULL;
  for (int i = 0; i < 5; i++)
  {
    if (head == NULL)
    {
      head = new Node(arr[i]);
      tail = head;
    }
    else
    {
      Node *temp = new Node(arr[i]);
      tail->next = temp;
      tail = temp;
      tail->next = head;
    }
  }
  Node *temp = head;
  int i = 5;
  while (i--)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
}