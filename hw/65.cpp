// #include <iostream>
// using namespace std;

// int main()
// {
//   const char *str = "Hello, World!"; // modify nahi hoga
//   char *str = "Hello, World!";       // modify ho jayega
// }

// #include <iostream>
// using namespace std;

// int calculateLength(const char *str)
// {
//   int length = 0;
//   while (str[length])
//   {
//     length++;
//   }
//   return length;
// }

// int main()
// {
//   const char *myString = "Hello, World!";
//   cout << "Length of the string: " << calculateLength(myString) << endl;
//   return 0;
// }

#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(const char *str)
{
  // Check for palindrome
  int length = 0;
  while (str[length])
  {
    length++;
  }
  for (int i = 0, j = length - 1; i <= length / 2; i++, j--)
  {
    if (str[i] != str[j])
      return 0;
  }
  return 1;
}

int main()
{
  const char *palindrome1 = "level";
  const char *palindrome2 = "hello";
  cout << "Is '" << palindrome1 << "' a palindrome? " << (isPalindrome(palindrome1) ? "Yes" : "No") << endl;
  cout << "Is '" << palindrome2 << "' a palindrome? " << (isPalindrome(palindrome2) ? "Yes" : "No") << endl;
  return 0;
}
