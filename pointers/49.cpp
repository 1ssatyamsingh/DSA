#include <iostream>
using namespace std;
int main()
{
  // variable ke ly heap memory allocate karo
  int *ptr = new int;
  *ptr = 5; // value assign
  cout << ptr << endl;

  float *ptr1 = new float;
  *ptr1 = 5.3; // value assign
  cout << ptr1 << endl;

  int n;
  cin >> n;
  int *p = new int[n];
  for (int i = 0; i < n; i++)
    p[i] = i + 1;
  for (int i = 0; i < n; i++)
  {
    cout << p[i] << " ";
  }

  // delete keyword use
  delete ptr;
  delete ptr1;
  delete[] p;
}