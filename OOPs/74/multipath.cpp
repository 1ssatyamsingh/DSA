#include <iostream>
using namespace std;

class Human
{
public:
  string name;
};

class Engineer : public virtual Human
{
protected:
  string specialization;

public:
  void work()
  {
    cout << "I am engineer\n";
  }
};

class Youtuber : public virtual Human
{
protected:
  int subscribers;

public:
  void cont()
  {
    cout << "I am youtuber\n";
  }
};

class Codeteacher : public Engineer, public Youtuber
{
  int salary;

public:
  Codeteacher(string specialization, int subscribers, string name, int salary)
  {
    this->name = name;
    this->specialization = specialization;
    this->subscribers = subscribers;
    this->salary = salary;
  }
  void display()
  {
    cout << "NAME: " << name << "\nSpecialization: " << specialization << "\nSubscribers: " << subscribers << "\nSalary: " << salary << "\n";
  }
  void duty()
  {
    cout << "I am a codeteacher\n";
  }
};

int main()
{
  // Engineer Ram;
  Codeteacher A("CSE", 3400, "Rohit", 45000);
  A.display();
  A.work();
  A.duty();
  A.cont();
}