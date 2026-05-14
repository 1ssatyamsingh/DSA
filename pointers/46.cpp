#include <iostream>
using namespace std;

int main()
{
  int arr[5] = {1, 2, 3, 4, 5};
  int *ptr = arr;
  // print address of first element or 0th index
  // cout << arr << endl;
  // cout << arr + 0 << endl;
  // cout << &arr[0] << endl;
  // cout << ptr << endl;
  // print address of first element or 0th index
  // cout << arr + 1 << endl;
  // cout << &arr[1] << endl;

  // print the value
  // cout << arr[0] << endl;
  // cout << *arr << endl;
  // cout << *(arr + 1) << endl;

  // saare address print

  // for (int i = 0; i < 5; i++)
  // {
  //   // cout << arr + i << endl;
  //   cout << ptr + i << endl;
  // }
  // print all value
  // for (int i = 0; i < 5; i++)
  // {
  // cout << arr[i] << " ";
  // cout << *(arr + i) << " ";
  // cout << ptr[i] << " ";
  // cout << *(ptr + i) << " ";
  // }

  // Arithmetic operatoin in ptr
  // for (int i = 0; i < 5; i++)
  // {
  //   cout << *ptr << " ";
  //   ptr++;
  // }
  // cout << endl;

  // Addition
  // ptr = ptr + 2;
  // cout << ptr << endl;

  // these arithmetic operations are not valid for arr
  // arr++;
  // arr = arr+2;

  // Homework
  char crr[5] = "1234";
  cout << &crr << endl;

  char name = 'a';
  cout << &name << endl;
}