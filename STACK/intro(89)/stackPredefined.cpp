#include <iostream>
#include <stack>
using namespace std;

int main()
{
  stack<int> S;
  S.push(6);
  S.push(10);
  cout << S.size() << "\n";
  cout << S.top() << "\n";
  S.pop();
  cout << S.size() << "\n";
  cout << S.top() << "\n";
  cout << S.empty() << "\n";
}