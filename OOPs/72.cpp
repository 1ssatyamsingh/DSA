#include <iostream>
using namespace std;

class Customer
{
  string name;
  int acc_no, balance;
  // static int total_customer; // They are attribute of class or class member
  // static int total_balance;

public:
  Customer(string name, int acc_no, int balance)
  {
    this->name = name;
    this->acc_no = acc_no;
    this->balance = balance;
    // total_customer++;
    // total_balance += balance;
  }

  // static void acceStatic()
  // {
  //   cout << total_customer << endl;
  //   cout << total_balance << endl;
  // }

  void deposit(int ammount)
  {
    if (ammount > 0)
    {
      balance += ammount;
      // total_balance += ammount;
    }
    else
    {
      cout << "invalid amount\n";
    }
  }

  void withdraw(int amount)
  {
    if (amount <= balance && amount > 0)
    {
      balance -= amount;
      // total_balance -= amount;
    }
  }

  void display()
  {
    cout << name << " " << acc_no << " " << balance << endl;
  }
};

// int Customer::total_customer = 0;
// int Customer::total_balance = 0;

int main()
{

  Customer A1("Rohit", 1, 1000);
  Customer A2("Mohit", 1, 1800);
  A1.deposit(-6000);
  A2.withdraw(9000);
  // Customer::acceStatic();
  A1.display();
  A2.display();
}