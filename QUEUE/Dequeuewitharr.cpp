#include <iostream>
using namespace std;

class Dequeue
{
  int front, rear, size;
  int *arr;

public:
  Dequeue(int n)
  {
    size = n;
    arr = new int[n];
    front = rear = -1;
  }

  bool isEmpty()
  {
    return front == -1;
  }

  bool isFull()
  {
    return (rear + 1) % size == front;
  }

  void push_front(int x)
  {
    if (isEmpty())
    {
      front = rear = 0;
      arr[0] = x;
      cout << "pushed " << x << " in Dequeue\n";
      return;
    }
    else if (isFull())
    {
      cout << "Queue overflow\n";
      return;
    }
    else
    {
      front = (front - 1 + size) % size;
      arr[front] = x;
      cout << "pushed " << x << " in Dequeue\n";
      return;
    }
  }

  void push_back(int x)
  {
    if (isEmpty())
    {
      front = rear = 0;
      arr[0] = x;
      cout << "pushed " << x << " in Dequeue\n";
      return;
    }
    else if (isFull())
    {
      cout << "Queue overflow\n";
      return;
    }
    else
    {
      rear = (rear + 1) % size;
      arr[rear] = x;
      cout << "pushed " << x << " in Dequeue\n";
      return;
    }
  }

  void pop_front()
  {
    if (isEmpty())
    {
      cout << "Queue underflow\n";
      return;
    }
    else
    {
      if (front == rear)
      {
        cout << "popped " << arr[front] << " in Dequeue\n";
        front = rear = -1;
        return;
      }
      else
      {

        cout << "popped " << arr[front] << " in Dequeue\n";
        front = (front + 1) % size;
        return;
      }
    }
  }

  void pop_back()
  {
    if (isEmpty())
    {
      cout << "Queue underflow\n";
      return;
    }
    else
    {
      if (front == rear)
      {
        cout << "popped " << arr[rear] << " in Dequeue\n";
        front = rear = -1;
        return;
      }
      else
      {
        cout << "popped " << arr[rear] << " in Dequeue\n";
        rear = (rear - 1 + size) % size;
        return;
      }
    }
  }

  int start()
  {
    if (isEmpty())
      return -1;
    else
      return arr[front];
  }

  int end()
  {
    if (isEmpty())
      return -1;
    else
      return arr[rear];
  }
};

int main()
{
  Dequeue q(4);
  q.push_front(6);
  q.push_front(7);
  q.push_back(4);
  q.push_back(5);
  q.push_back(8);
  q.push_back(9);

  cout << q.start() << endl;
  cout << q.end() << endl;
  q.pop_front();

  cout << q.start() << endl;
  cout << q.end() << endl;
  q.pop_back();
  q.pop_back();
  q.pop_back();
  q.pop_back();
}