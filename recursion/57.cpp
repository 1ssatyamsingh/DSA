#include <iostream>
using namespace std;

bool linearSearch(int arr[], int start, int end, int x)
{
  if (start > end)
    return 0;
  if (arr[start] == x)
    return 1;
  linearSearch(arr, start + 1, end, x);
}

bool binarySearch(int arr[], int start, int end, int x)
{
  if (start > end)
    return 0;
  int mid = start + (end - start) / 2;
  if (arr[mid] == x)
    return 1;
  else if (arr[mid] < x)
    return binarySearch(arr, mid + 1, end, x);
  else
    return binarySearch(arr, start, mid - 1, x);
}

int main()
{
  int arr[] = {2, 3, 4, 7, 8, 11, 12};
  // cout << linearSearch(arr, 0, 6, 8);
  cout << binarySearch(arr, 0, 6, 13);
}