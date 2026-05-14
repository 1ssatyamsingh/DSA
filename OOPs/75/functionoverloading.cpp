#include <iostream>
using namespace std;

class Area
{
public:
  int calculatearea(int r)
  {
    cout << 3.14 * r * r << endl;
  }
  int calculatearea(int l, int b)
  {
    cout << l * b;
  }
};

int main()
{
  Area A;
  A.calculatearea(4);
  A.calculatearea(6, 4);
}