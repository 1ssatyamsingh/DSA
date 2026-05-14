#include <iostream>
using namespace std;

void print(int n)
{
  if (n == 0)
  {
    cout << "Happy Birthday";
    return;
  }
  cout << n << " days left for birthday\n";
  print(n - 1);
}

int main()
{
  print(8);
}