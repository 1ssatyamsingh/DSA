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

class Stack
{
  int size;
  Node *top;

public:
  Stack()
  {
    top = NULL;
    size = 0;
  }

  // push
  void push(int value)
  {
    Node *temp = new Node(value);
    if (temp == NULL)
    {
      cout << "Stack overflow\n";
      return;
    }
    temp->next = top;
    top = temp;
    cout << "pushed " << top->data << " in the stack\n";
    size++;
  }

  // pop
  void pop()
  {
    if (top == NULL)
    {
      cout << "Stack underflow\n";
      return;
    }
    cout << "popped " << top->data << " from the stack\n";
    Node *temp = top;
    top = top->next;
    delete temp;
    size--;
  }

  // peek
  int peek()
  {
    if (top == NULL)
    {
      cout << "stack is empty\n";
      return -1;
    }
    return top->data;
  }

  // isEmpty
  bool isEmpty()
  {
    return top == NULL;
  }

  // isSize
  int isSize()
  {
    return size;
  }
};

int main()
{
  Stack S;
  S.push(6);
  S.push(9);
  S.push(8);
  S.push(7);
  S.push(4);
  S.push(2);
  S.pop();
  S.pop();
  S.pop();
  cout << S.isEmpty() << "\n";
  cout << S.isSize() << "\n";
  cout << S.peek() << "\n";
}