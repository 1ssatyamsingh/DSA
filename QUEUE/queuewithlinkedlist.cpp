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

class Queue
{
public:
  Node *front;
  Node *rear;
  Queue()
  {
    front = NULL;
    rear = NULL;
  }

  bool isEmpty()
  {
    return front == NULL;
  }

  void push(int x)
  {
    if (isEmpty())
    {
      front = rear = new Node(x);
      cout << "pushed " << x << " into the queue\n";
    }
    else
    {
      rear->next = new Node(x);

      cout << "pushed " << x << " into the queue\n";
      rear = rear->next;
    }
  }

  void pop()
  {
    if (isEmpty())
    {
      cout << "queue underflow\n";
    }
    else
    {
      Node *temp = front;

      cout << "popped " << front->data << " from the queue\n";
      front = front->next;
      delete temp;
    }
  }

  int start()
  {
    if (isEmpty())
    {
      cout << "Queue is empty\n";
      return -1;
    }
    else
      return front->data;
  }
};

int main()
{

  Queue q;
  q.push(6);
  q.push(9);
  q.push(8);
  q.push(6);
  q.pop();
  q.push(4);
}