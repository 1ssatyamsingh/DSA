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

int main()
{
  Node *Head = NULL, *Tail = NULL;

  int arr[] = {1, 3, 4, 2, 5};

  for (int i = 0; i < 5; i++)
  {
    if (Head == NULL)
    {
      Head = new Node(arr[i]);
      Tail = Head;
    }
    else
    {
      //   Node *temp = new Node(arr[i]);
      //   Tail->next = temp;
      //   Tail = temp;
      Tail->next = new Node(arr[i]);
      Tail = Tail->next;
    }
  }

  Node *temp = Head;
  while (temp != NULL)
  {
    cout << temp->data << " " << temp->next << "\n";
    temp = temp->next;
  }
}