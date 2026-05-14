#include <iostream>
using namespace std;

int maxele(int arr[], int n)
{
  if (n == 1)
    return arr[0];
  return max(arr[n - 1], maxele(arr, n - 1));
}

int product(int arr[], int n)
{
  if (n == 1)
    return arr[0];
  return arr[n - 1] * product(arr, n - 1);
}

int numEven(int arr[], int n, int num)
{
  if (n == 0)
    return num;
  if (arr[n - 1] % 2 == 0)
    num++;
  return numEven(arr, n - 1, num);
}

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  // cout << maxele(arr, n);
  // cout << product(arr, n);
  int num = 0;
  cout << numEven(arr, n, num);
}