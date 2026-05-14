#include <iostream>
using namespace std;

int fibonacci(int n)
{
  if (n <= 1)
    return n;
  return fibonacci(n - 1) + fibonacci(n - 2);
}

int nthstair(int n)
{
  if (n <= 1)
    return 1;
  return nthstair(n - 1) + nthstair(n - 2);
}

int gcd(int n, int m)
{
  if (m == 0)
    return n;
  gcd(m, n % m);
}

int main()
{
  int n, m;
  cin >> n >> m;
  // cout << fibonacci(n);
  // cout << nthstair(n); // step 1 or 2
  cout << gcd(n, m);
}