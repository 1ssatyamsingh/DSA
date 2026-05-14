#include <iostream>
using namespace std;

bool pal(string s, int start, int end)
{
  if (start >= end)
    return 1;
  if (s[start] == s[end])
    return 0;
  else
    return pal(s, start + 1, end - 1);
}

int countVowel(string s, int start, int end)
{
  if (start == end + 1)
    return 0;
  if (s[start] == 'a' || s[start] == 'e' || s[start] == 'i' || s[start] == 'o' || s[start] == 'u')
    return 1 + countVowel(s, start + 1, end);
  else
    return countVowel(s, start + 1, end);
}

void revStr(string &s, int start, int end)
{
  if (start >= end)
    return;
  char temp = s[start];
  s[start] = s[end];
  s[end] = temp;
  revStr(s, start + 1, end - 1);
}

void toUpper(string &s, int index)
{
  if (index == -1)
    return;
  s[index] = s[index] + 'A' - 'a';
  return toUpper(s, index - 1);
}

int main()
{
  string str = "namana";

  // cout << pal(str, 0, 5) << endl;
  // cout << countVowel(str, 0, 5) << endl;
  // revStr(str, 0, 5);
  toUpper(str, 5);
  cout << str << endl;
}