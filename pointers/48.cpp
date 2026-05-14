#include <bits/stdc++.h>
using namespace std;

void fun(int **p2)
{
  *p2 = *p2 + 1;
}

int main()
{
  int n = 10;
  int *p = &n;
  int **p2 = &p;   // double pointer
  int ***p3 = &p2; // triple pointer

  cout << p << endl;
  cout << *p2 << endl;
  cout << p2 << endl;
  cout << *p3 << endl;
  cout << p3 << endl;

  ***p3 = ***p3 + 10;
  cout << n << endl;

  cout << p << endl;
  fun(p2);
  cout << p << endl; // change value of p
}