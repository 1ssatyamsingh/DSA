#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next, *prev;
  Node(int value)
  {
    data = value;
    next = NULL;
    prev = NULL;
  }
};

class Dequeue
{
private:
  Node *front, *rear;

public:
  Dequeue()
  {
    front = rear = NULL;
  }

  void push_front(int x)
  {
    if (front == NULL)
    {
      front = rear = new Node(x);
      cout << "pushed " << x << " at front\n";
      return;
    }
    else
    {
      Node *temp = new Node(x);

      cout << "pushed " << x << " at front\n";
      temp->next = front;
      front->prev = temp;
      front = temp;
      return;
    }
  }

  void push_back(int x)
  {
    if (front == NULL)
    {
      front = rear = new Node(x);

      cout << "pushed " << x << " at back\n";
      return;
    }
    else
    {
      Node *temp = new Node(x);
      cout << "pushed " << x << " at back\n";
      temp->prev = rear;
      rear->next = temp;
      rear = temp;
      return;
    }
  }

  void pop_front()
  {
    if (front == NULL)
    {
      cout << "Deque underflow\n";
      return;
    }

    else
    {
      Node *temp = front;
      cout << "popped " << front->data << " from front\n";
      front = front->next;
      delete temp;
      if (front)
        front->prev = NULL;
      else
        rear = NULL;
    }
  }

  void pop_back()
  {
    if (front == NULL)
    {
      cout << "Deque underflow\n";
      return;
    }
    else
    {
      Node *temp = rear;

      cout << "popped " << rear->data << " from rear\n";
      rear = rear->prev;
      delete temp;
      if (rear)
        rear->next = NULL;
      else
        front = NULL;
    }
  }

  int start()
  {
    if (front == NULL)
      return -1;
    else
      return front->data;
  }

  int end()
  {
    if (front == NULL)
      return -1;
    else
      return rear->data;
  }
};

int main()
{
  Dequeue q;
  q.push_front(6);
  q.push_front(7);
  q.push_back(4);
  q.push_back(5);

  cout << q.start() << endl;
  cout << q.end() << endl;
  q.pop_front();
  q.pop_back();

  cout << q.start() << endl;
  cout << q.end() << endl;
  q.pop_back();

  q.pop_back();
  q.pop_back();
}