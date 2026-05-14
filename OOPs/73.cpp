#include <iostream>
using namespace std;

class Human
{
  string religion, color;

protected:
  string name;
  int age, weight;
};

class Student : private Human
{
  int roll, fees;

public:
  Student(string name, int age, int weight, int roll, int fees)
  {
    this->name = name;
    this->age = age;
    this->weight = weight;
    this->roll = roll;
    this->fees = fees;
  }
};

int main()
{
  Human Ram;
  Student A;
  A.fun("Rohit", 23, 78, 113, 3500);
}