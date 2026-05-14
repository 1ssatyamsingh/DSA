#include <iostream>
using namespace std;

int factorial(int n)
{
  if (n == 0)
    return 1;
  return n * factorial(n - 1);
}

int sum(int n)
{
  if (n == 0)
    return 0;
  return n + sum(n - 1);
}

int sumofsquare(int n)
{
  if (n == 0)
    return 0;
  return n * n + sumofsquare(n - 1);
}

int pow(int n, int m)
{
  if (m == 0)
    return 1;
  return n * pow(n, m - 1);
}

int main()
{
  int n;
  cin >> n;
  // cout << factorial(5);
  // cout << sum(n);
  // cout << pow(n, m);
  cout << sumofsquare(n);
}