#include <iostream>
using namespace std;

class Stack
{
  int *arr;
  int size;
  int top;

public:
  bool flag = 0;

  Stack(int s)
  {
    size = s;
    top = -1;
    arr = new int[s];
    flag = 1;
  }

  // push
  void push(int value)
  {
    if (top == size - 1)
    {
      cout << "Stack overflow\n";
      return;
    }
    top++;
    arr[top] = value;
    cout << "pushed " << value << " into the stack\n";
    flag = 0;
  }

  // pop
  void pop()
  {
    if (top == -1)
    {
      cout << "Stack underflow\n";
      return;
    }
    cout << "popped " << arr[top] << " from the stack\n";
    top--;
    if (top == -1)
      flag = 1;
  }

  // peek
  int peek()
  {
    if (top == -1)
    {
      cout << "Stack is empty\n";
      return -1;
    }
    return arr[top];
  }

  // issize
  int isSize()
  {
    return top + 1;
  }

  // isempty
  bool isEmpty()
  {
    return top == -1;
  }
};

int main()
{
  Stack S(5);
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
  int value = S.peek();
  if (S.flag == 0)
    cout << "Top of the stack is " << value << "\n";
}
