#include <iostream>
using namespace std;

void toh(int n, int sour, int help, int des)
{
  if (n == 1)
  {
    cout << "move disk " << n << " from rod " << sour << " to rod " << des << endl;
    return;
  }
  toh(n - 1, sour, des, help);
  cout << "move disk " << n << " from rod " << sour << " to rod " << des << endl;
  toh(n - 1, help, sour, des);
}

int main()
{
  int n = 4;
  toh(n, 1, 2, 3);
}