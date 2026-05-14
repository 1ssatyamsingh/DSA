#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int start, int mid, int end)
{
  vector<int> temp(end - start + 1);
  int left = start, right = mid + 1, index = 0;
  while (left <= mid && right <= end)
  {
    if (arr[left] <= arr[right])
    {
      temp[index] = arr[left];
      index++;
      left++;
    }
    else
    {
      temp[index] = arr[right];
      index++;
      right++;
    }
  }
  // left array me element bacha hai
  while (left <= mid)
  {
    temp[index] = arr[left];
    index++;
    left++;
  }
  // right array me element bacha hai
  while (right <= end)
  {
    temp[index] = arr[right];
    index++;
    right++;
  }
  // put these element in array
  index = 0;
  while (start <= end)
  {
    arr[start] = temp[index];
    start++;
    index++;
  }
  return;
}

void mergeSort(int arr[], int start, int end)
{
  if (start >= end)
    return;
  int mid = start + (end - start) / 2;
  mergeSort(arr, start, mid);
  mergeSort(arr, mid + 1, end);
  merge(arr, start, mid, end);
}

int main()
{
  int arr[] = {1, 5, 2, 4, 6, 1, 7};
  mergeSort(arr, 0, 6);
  for (int i = 0; i < 7; i++)
    cout << arr[i] << " ";
}