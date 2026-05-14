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
  // STATIC MEMORY
  Node A1(4);
  // A1.data = 32;
  // A1.next = NULL;

  // DYNAMIC MEMORY
  Node *Head;
  Head = new Node(40);

  cout << Head->data << " " << Head->next;
}