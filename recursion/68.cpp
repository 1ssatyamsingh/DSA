#include <bits/stdc++.h>
using namespace std;

bool valid(int i, int j, int n)
{
  return i >= 0 && j >= 0 && i < n && j < n;
}

void total(vector<vector<int>> &mat, int i, int j, int n, vector<vector<int>> &visited, string &path, vector<string> &ans)
{
  if (i == n - 1 && j == n - 1)
  {
    ans.push_back(path);
    return;
  }
  int row[] = {-1, 1, 0, 0};
  int col[] = {0, 0, -1, 1};
  string dir = "UDLR";
  visited[i][j] = 1;
  for (int k = 0; k < 4; k++)
  {
    if (valid(i + row[k], j + col[k], n) && mat[i + row[k]][j + col[k]] && !visited[i + row[k]][j + col[k]])
    {
      path.push_back(dir[k]);
      total(mat, i + row[k], j + col[k], n, visited, path, ans);
      path.pop_back();
    }
  }
  visited[i][j] = 0;
}

vector<string> findPath(vector<vector<int>> &mat)
{
  // code here
  int n = mat.size();
  vector<vector<int>> visited(n, vector<int>(n, 0));
  string path;
  vector<string> ans;
  if (!mat[0][0] || !mat[n - 1][n - 1])
  {
    return ans;
  }
  total(mat, 0, 0, n, visited, path, ans);
  return ans;
}
