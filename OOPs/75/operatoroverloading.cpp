#include <iostream>
using namespace std;

class Complex
{
  int real, img;

public:
  Complex()
  {
  }
  Complex(int real, int img)
  {
    this->real = real;
    this->img = img;
  }

  Complex operator+(Complex &c)
  {
    Complex ans;
    ans.real = c.real + real;
    ans.img = c.img + img;
    return ans;
  }
  Complex operator-(Complex &c)
  {
    Complex ans;
    ans.real = real - c.real;
    ans.img = img - c.img;
    return ans;
  }

  void display()
  {
    cout << real << " + i" << img << endl;
  }
};

int main()
{
  Complex C1(2, 3);
  Complex C2(1, 5);
  C1.display();
  C2.display();
  Complex C3 = C1 + C2;
  C3.display();
  Complex C4 = C3 - C2;
  C4.display();
}