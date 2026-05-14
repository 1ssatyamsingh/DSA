#include <iostream>
using namespace std;

class Student
{
public:
  string name;
  // char a;
  // char b;
  int age, roll_number;
  string grade;
  // public:
  // void setname(string n)
  // {
  //   name = n;
  // }
  // void setage(int a)
  // {
  //   age = a;
  // }
  // void setroll(int r)
  // {
  //   roll_number = r;
  // }
  // void setgrade(string g)
  // {
  //   grade = g;
  // }
  // void getname()
  // {
  //   cout << name << endl;
  // }
  // void getage()
  // {
  //   cout << age << endl;
  // }
  // void getroll()
  // {
  //   cout << roll_number << endl;
  // }
  // void getgrade()
  // {
  //   cout << grade << endl;
  // }
};

int main()
{
  Student *S = new Student;
  (*S).name = "Rohit";
  S->age = 21;
  // s1.setname("Rohit");
  // s1.setage(21);
  // s1.setroll(2301);
  // s1.setgrade("O");
  // cout
  //     << sizeof(s1);
  cout << (*S).name << endl;
  cout << S->age << endl;
  // cout << s1.roll_number << endl;
  // cout << s1.grade << endl;
  // s1.getname();
  // s1.getage();
  // s1.getroll();
  // s1.getgrade();
}