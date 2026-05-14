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
      Tail->next = new Node(arr[i]);
      Tail = Tail->next;
    }
  }

  //--------INSERT AFTER POSITION-------

  int x = 2;
  int value = 33;
  x--;
  Node *temp = Head;
  while (x--)
  {
    temp = temp->next;
  }
  Node *temp2 = new Node(value);
  temp2->next = temp->next;
  temp->next = temp2;

  temp = Head;
  while (temp != NULL)
  {
    cout << temp->data << " " << temp->next << "\n";
    temp = temp->next;
  }
}