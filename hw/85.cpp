// 1: Use a quick sort algorithm to sort elements in descending order.
#include <iostream>
using namespace std;

int partition(int arr[], int start, int end)
{
  int pos = start;
  for (int i = start; i <= end; i++)
  {
    if (arr[i] >= arr[end]) // arr[end] --> pivot element
    {
      swap(arr[i], arr[pos]);
      pos++;
    }
  }
  return pos - 1;
}

void quickSort(int arr[], int start, int end)
{
  if (start >= end)
    return;
  int pivot = partition(arr, start, end);
  quickSort(arr, start, pivot - 1);
  quickSort(arr, pivot + 1, end);
}

int main()
{
  int arr[] = {3, 6, 2, 13, 7, 3};
  quickSort(arr, 0, 5);
  for (int i = 0; i < 6; i++)
    cout << arr[i] << " ";
}