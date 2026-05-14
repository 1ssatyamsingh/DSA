#include <iostream>
#include <vector>
using namespace std;

int sum(vector<int> &temp)
{
  int sum = 0;
  for (int i = 0; i < temp.size(); i++)
  {
    sum += temp[i];
  }
  return sum;
}

void subsequence(int arr[], int index, int n, vector<int> &ans, vector<int> &temp)
{
  if (index == n)
  {
    ans.push_back(sum(temp));
    return;
  }
  subsequence(arr, index + 1, n, ans, temp);
  temp.push_back(arr[index]);
  subsequence(arr, index + 1, n, ans, temp);
  temp.pop_back();
}

int main()
{
  int arr[] = {1, 2, 3};
  vector<int> ans;
  vector<int> temp;
  subsequence(arr, 0, 3, ans, temp);
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
  }
}