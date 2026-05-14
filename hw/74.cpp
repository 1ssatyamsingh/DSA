#include <iostream>
using namespace std;

int sumOfCubes(int n)
{
  if (n == 0)
    return 0;
  return n * n * n + sumOfCubes(n - 1);
}

int pow4(int n)
{
  if (n == 0)
    return 1;
  return 4 * pow4(n - 1);
}

bool isPrime(int m, int num)
{
  if (m == 1)
    return 1;
  else if (num % m == 0)
    return 0;
  return isPrime(m - 1, num);
}

int main()
{
  int n;
  cin >> n;
  // cout << sumOfCubes(n);
  // cout << pow4(n);
  cout << isPrime(n - 1, n); // num > 1
}