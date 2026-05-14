#include <iostream>
using namespace std;

int main()
{
  int a = 10;
  cout << &a << endl; // print address of a
  int *ptr = &a;
  cout << ptr << endl;  // print address of a
  cout << *ptr << endl; // print value of a
  int b = 30;
  ptr = &b;                    // now pointer points to b
  cout << *ptr << endl;        // prints value of b
  cout << sizeof(ptr) << endl; // size of ptr (int type)
  float m = 2.6;
  float *ptr1 = &m;
  cout << sizeof(ptr1) << endl; // size of ptr1 (float type)
}