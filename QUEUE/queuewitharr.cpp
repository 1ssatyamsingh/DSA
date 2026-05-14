#include <iostream>
using namespace std;

class Queue
{
public:
  int *arr;
  int front, rear;
  int size;

  Queue(int n)
  {
    arr = new int[n];
    front = rear = -1;
    size = n;
  }

  bool isEmpty()
  {
    return front == -1;
  }

  bool isFull()
  {
    return rear == size - 1;
  }

  void push(int x)
  {
    if (isEmpty())
    {
      front = rear = 0;
      arr[0] = x;
      cout << "pushed " << x << " into the queue\n";
    }
    else if (isFull())
    {
      cout << "queue overflow\n";
      return;
    }
    else
    {
      rear++;
      cout << "pushed " << x << " into the queue\n";
      arr[rear] = x;
    }
  }

  void pop()
  {
    if (isEmpty())
    {
      cout << "queue underflow\n";
      return;
    }
    else if (front == rear)
    {
      cout << "popped " << arr[front] << " from the queue\n";
      front = rear = -1;
    }
    else
    {
      cout << "popped " << arr[front] << " from the queue\n";
      front++;
    }
  }

  int start()
  {
    if (isEmpty())
    {
      cout << "queue is empty\n";
      return -1;
    }
    else
    {
      return arr[front];
    }
  }
};

int main()
{
  Queue q(4);
  q.push(6);
  q.push(67);
  q.push(68);
  q.push(7);
  q.pop();
  q.pop();
  q.push(6);
  int num = q.start();
  if (!q.isEmpty())
    cout << num << "\n";
}