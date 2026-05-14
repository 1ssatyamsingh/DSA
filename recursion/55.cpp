#include <iostream>
using namespace std;

void print2(int arr[], int index)
{
  if (index == -1)
    return;
  // print2(arr, index - 1); // normal
  cout << arr[index] << " ";
  print2(arr, index - 1); // reverse
}

void print(int arr[], int index, int n)
{
  if (index == n)
    return;
  return print(arr, index + 1, n); // reverse
  cout << arr[index] << " ";
  // return print(arr, index + 1, n);//normal
}

int minelement(int arr[], int index)
{
  if (index == 0)
    return arr[index];
  return min(arr[index], minelement(arr, index - 1));
}
int maxelement(int arr[], int index, int n)
{
  if (index == n - 1)
    return arr[index];
  return max(arr[index], maxelement(arr, index + 1, n));
}

int sum(int arr[], int i, int n)
{
  if (i == n)
    return 0;
  return arr[i] + sum(arr, i + 1, n);
}
int main()
{
  int arr[] = {3, 4, 1, 2, 8};
  // print(arr, 0, 5);
  // print2(arr, 4);
  // cout << sum(arr, 0, 5);
  cout << minelement(arr, 4) << endl;
  cout << maxelement(arr, 0, 5) << endl;
}