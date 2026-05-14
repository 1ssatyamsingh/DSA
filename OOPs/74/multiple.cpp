#include <iostream>
using namespace std;

class Engineer
{
protected:
  string specialization;

public:
  void work()
  {
    cout << "I am engineer\n";
  }
};

class Youtuber
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
  string name;

public:
  Codeteacher(string specialization, int subscribers, string name)
  {
    this->name = name;
    this->specialization = specialization;
    this->subscribers = subscribers;
  }
  void display()
  {
    cout << "NAME: " << name << "\nSpecialization: " << specialization << "\nSubscribers: " << subscribers << "\n";
  }
  void duty()
  {
    cout << "I am a codeteacher\n";
  }
};

int main()
{
  // Engineer Ram;
  Codeteacher A("CSE", 3400, "Rohit");
  A.display();
  A.work();
  A.duty();
  A.cont();
}