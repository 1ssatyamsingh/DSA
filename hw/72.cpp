#include <iostream>
using namespace std;

void odd(int n)
{
  if (n == -1)
    return;
  cout << n << endl;
  odd(n - 2);
}

void print(int n)
{
  if (n == 0)
    return;
  cout << "coder army\n";
  print(n - 1);
}

void printnum(int n)
{
  if (n == 0)
    return;
  printnum(n - 1);
  cout << n << "\n";
}

int main()
{
  // print(10);
  int n;
  cin >> n;
  // odd(n);
  printnum(n);
}