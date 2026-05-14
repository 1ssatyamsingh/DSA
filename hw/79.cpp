// Given a String, count the number of consonants in it.
#include <iostream>
using namespace std;

int consonant(string s, int i, int c)
{
  if (i == -1)
    return c;
  if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
  {
    c++;
  }
  return consonant(s, i - 1, c);
}

int main()
{
  string s = "Radheshyam";
  cout << consonant(s, s.length() - 1, 0);
}