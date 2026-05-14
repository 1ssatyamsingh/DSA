#include <iostream>
using namespace std;
int main()
{
  // char arr[] = "sona";
  // cout << (void *)arr << endl;
  // cout << (void *)(arr + 1) << endl;
  // string s = "mona";
  // cout << &s << endl;
  int arr[5] = {1, 2, 3, 4, 5};
  // cout << arr << endl;      // address of first element
  // cout << &arr << endl;     // address of arr
  // cout << arr + 1 << endl;  // increment by sizeof(int) ... moves to next element
  // cout << &arr + 1 << endl; // increment by sizeof(arr) ... moves to next array block
  int *p = arr + 4;
  for (int i = 0; i < 5; i++)
  {
    cout << *p << endl;
    p--;
  }
}