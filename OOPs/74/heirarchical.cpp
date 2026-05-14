#include <iostream>
using namespace std;

class Human
{
protected:
  string name;
  int age, weight;

public:
  Human()
  {
  }
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
};

class Teacher : public Human
{
  int salary;
  string subject;

public:
  Teacher(string name, int age, int weight, int salary, string subject)
  {
    this->name = name;
    this->age = age;
    this->weight = weight;
    this->salary = salary;
    this->subject = subject;
  }
};

int main()
{
  // Human Ram;
  Student A("Shyam", 12, 43, 34, 2300);
}