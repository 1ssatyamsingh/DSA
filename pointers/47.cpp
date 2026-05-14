#include <bits/stdc++.h>
using namespace std;

// void swap(int p1, int p2) // pass by value
// {
//   int temp = p1;
//   p1 = p2;
//   p2 = temp;
// }
void swap(int *p1, int *p2) // passsby address
{
  int temp = *p1;
  *p1 = *p2;
  *p2 = temp;
}
// void swap(int &p1, int &p2) // pass by reference
// {
//   int temp = p1;
//   p1 = p2;
//   p2 = temp;
// }

void pass(vector<int> &v1)
{
  for (int i = 0; i < 5; i++)
  {
    v1[i] = 2;
  }
}

void dob(int p[])
{
  for (int i = 0; i < 5; i++)
  {
    p[i] *= 2;
  }
}

int main()
{
  // char crr[5] = "1234";
  // char *ptr = crr;
  // cout << crr << endl;                      // prints value
  // cout << ptr << endl;                      // prints value
  // cout << static_cast<void *>(crr) << endl; // prints address
  // cout << (void *)ptr << endl;              // prints address

  // char name = 'a';
  // char *ptr1 = &name;
  // cout << &name << endl;         // prints random value
  // cout << ptr1 << endl;          // prints random value
  // cout << (void *)&name << endl; // prints address
  // cout << (void *)ptr1 << endl;  // prints address

  int f = 10, s = 20;
  // swap(f, s); // pass by value and pass by reference
  swap(&f, &s);
  cout << f << " " << s << endl;

  // refence variable
  int &num = f;         // f & num are same
  cout << &f << endl;   // same address
  cout << &num << endl; // same address

  vector<int> v(5, 0);
  pass(v);
  for (int i = 0; i < 5; i++)
  {
    cout << v[i] << endl;
  }

  int arr[] = {1, 2, 3, 4, 5};
  dob(arr);
  for (int i = 0; i < 5; i++)
  {
    cout << arr[i] << " ";
  }
}
