#include <iostream>
using namespace std;

class Human
{
protected:
  string name;
  int age, weight;

public:
  Human(string name, int age)
  {
    this->name = name;
    this->age = age;
  }
  void work()
  {
    cout << "I am working\n";
  }

  // Human()
  // {
  //   cout << "Hello human\n";
  // }
  // ~Human()
  // {
  //   cout << "human gone\n";
  // }
};

class Student : public Human
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

  // Student()
  // {
  //   cout << "Hello student\n";
  // }

  // ~Student()
  // {
  //   cout << "student gone\n";
  // }
};

int main()
{
  // Human Ram;
  Student A;
}