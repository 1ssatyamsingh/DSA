#include <iostream>
using namespace std;

void odd(int n)
{
  if (n == -1)
    return;
  odd(n - 2);
  cout << n << endl;
}

void above10(int m, int n)
{
  if (n == 9)
    return;
  above10(m, n - 1);
  cout << n << endl;
}

void table(int n, int m)
{
  if (m == 0)
    return;
  table(n, m - 1);
  cout << n << " * " << m << " = " << n * m << endl;
}

int main()
{

  int n;
  cin >> n;
  // odd(n);
  // above10(10, n);
  table(n, 10);
}