#include <bits/stdc++.h>
using namespace std;

void permute(string &s, vector<string> &ans, int index)
{
  if (index == s.size())
  {
    ans.push_back(s);
    return;
  }
  vector<bool> use(26, 0);

  for (int i = index; i < s.size(); i++)
  {
    if (use[s[i] - 'A'] == 0)
    {
      swap(s[i], s[index]);
      permute(s, ans, index + 1);
      swap(s[i], s[index]);
      use[s[i] - 'A'] = 1;
    }
  }
}

int main()
{
  string s = "ABBD";
  vector<string> ans;
  permute(s, ans, 0);
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << endl;
  }
}
