#include <iostream>
using namespace std;

// void print(int n)
// {
//   if (n == 0)
//     return;
//   print(n - 1);
//   cout << n << endl;
// }

void printEven(int n)
{
  if (n == 0)
    return;
  printEven(n - 2);
  cout << n << endl;
}

void printOdd(int num, int N)
{
  if (num > N)
    return;
  cout << num << endl;
  printOdd(num + 2, N);
}

int main()
{
  int n;
  cin >> n;
  // print(6);
  if (n % 2 == 0)
    n--;
  // printEven( n);
  printOdd(1, n);
}