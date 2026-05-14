// #include <iostream>
// #include <vector>
// using namespace std;

// void subsequence(int arr[], int index, int n, vector<vector<int>> &ans, vector<int> &temp)
// {
//   if (index == n)
//   {
//     ans.push_back(temp);
//     return;
//   }
//   subsequence(arr, index + 1, n, ans, temp);
//   temp.push_back(arr[index]);
//   subsequence(arr, index + 1, n, ans, temp);
//   temp.pop_back();
// }

// int main()
// {
//   int arr[] = {1, 2, 3};
//   vector<vector<int>> ans;
//   vector<int> temp;
//   subsequence(arr, 0, 3, ans, temp);
//   for (int i = 0; i < ans.size(); i++)
//   {
//     for (int j = 0; j < ans[i].size(); j++)
//     {
//       cout << ans[i][j] << " ";
//     }
//     cout << endl;
//   }
// }

// string subset

// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;

// void subset(string s, int index, int n, vector<string> &ans, string &temp)
// {
//   if (index == n)
//   {
//     ans.push_back(temp);
//     return;
//   }
//   subset(s, index + 1, n, ans, temp);
//   temp.push_back(s[index]);
//   subset(s, index + 1, n, ans, temp);
//   temp.pop_back();
// }

// int main()
// {
//   string s = "abcd";
//   vector<string> ans;
//   string temp;
//   subset(s, 0, 4, ans, temp);
//   for (int i = 0; i < ans.size(); i++)
//   {
//     cout << ans[i];
//     cout << endl;
//   }
// }

// valid parenthesis

#include <iostream>
#include <vector>
#include <string>
using namespace std;

void validParen(int left, int right, int n, vector<string> &ans, string &temp)
{
  if (left == n && right == n)
  {
    ans.push_back(temp);
    return;
  }
  if (left < n)
  {
    temp.push_back('(');
    validParen(left + 1, right, n, ans, temp);
    temp.pop_back();
  }
  if (right < left)
  {
    temp.push_back(')');
    validParen(left, right + 1, n, ans, temp);
    temp.pop_back();
  }
}

int main()
{
  int n = 4;
  vector<string> ans;
  string temp;
  int left = 0, right = 0;
  validParen(left, right, n, ans, temp);
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i];
    cout << endl;
  }
}