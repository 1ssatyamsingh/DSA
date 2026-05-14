// 1: Given an array in non-increasing order, an element is given X, find if that element is present in the array or not. print 1 if its present else print 0.
// 2: Write a recursive function to reverse the elements of an array.
// 3: Write a recursive function to rotate elements in an array to the right by 1 position.
#include <iostream>
using namespace std;

bool binarysearch(int arr[], int start, int end, int x)
{
  if (start > end)
    return 0;
  int mid = start + (end - start) / 2;
  if (arr[mid] == x)
    return 1;
  else if (arr[mid] < x)
    return binarysearch(arr, start, mid - 1, x);
  else
    return binarysearch(arr, mid + 1, end, x);
}

void reverseElement(int arr[], int s, int e)
{
  if (s >= e)
  {
    return;
  }

  int temp = arr[s];
  arr[s] = arr[e];
  arr[e] = temp;
  return reverseElement(arr, s + 1, e - 1);
}

void rotateElement(int arr[], int s, int e, int temp)
{
  if (s == e)
  {
    arr[0] = temp;
    return;
  }
  int temp1 = arr[s + 1];
  arr[s + 1] = temp;
  temp = temp1;
  return rotateElement(arr, s + 1, e, temp);
}

int main()
{
  int arr[] = {9, 6, 4, 4, 2, 1};
  // cout << binarysearch(arr, 0, 5, 5);
  // reverseElement(arr, 0, 5);
  rotateElement(arr, 0, 5, arr[0]);
  for (int i = 0; i < 6; i++)
  {
    cout << arr[i] << " ";
  }
}