#include <iostream>
using namespace std;

class Student
{
  string name;
  int roll, grade;

public:
  Student() // default constructor
  {
    cout << "default constructor executed\n";
  }

  // Student(string name, int roll, int grade) // parameterized constructor
  // {
  //   this->name = name;
  //   this->grade = grade;
  //   this->roll = roll;
  //   cout << "parameterized constructor executed\n";
  // }
  // constructor overloading
  Student(string name, int grade)
  {
    this->name = name;
    this->grade = grade;
    cout << "parameterized constructor with 2 parameters executed\n";
  }
  // inline constructor
  Student(string n, int r, int g) : name(n), roll(r), grade(g) {}

  ~Student()
  {
    cout << "Destructor called " << name << "\n";
  }

  // copy constructor
  Student(Student &S)
  {
    name = S.name;
    grade = S.grade;
    roll = S.roll;
  }

  display()
  {
    cout << name << " " << roll << " " << grade << "\n";
  }
};

int main()
{
  Student s1("Rohit", 12, 65);
  Student s2("Rohan", 95);
  Student s3(s2);
  Student s4;
  s4 = s1; // copy by assignment operator
  s1.display();
  s2.display();
  s3.display();
  s4.display();
}
