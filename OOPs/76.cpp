//  An exception is an  unexpected problem that arises during the executiion of a program our program terminates suddenly with some errors/issues. Exception occurs during the running of the program

// The try keyword represents a block of code that may throw an exception placed inside the try block. It's followed by one  or more catch blocks. If an exception occurs , try block throws that exception.

// The catch statement represents a block of code that is executed when a particular exception is thrown from the try block. The code to handle the exception is written insidethe catch block.

// An exception in C++ can be thrown using the throw keyword. When a program encounters a throw statement , then it immediately terminates the current function and starts finding a matching catch block to handle the thrown exception.

#include <iostream>
#include <exception>
using namespace std;

class Customer
{
  string name;
  int acc_no, balance;

public:
  Customer(string name, int acc_no, int balance)
  {
    this->name = name;
    this->acc_no = acc_no;
    this->balance = balance;
  }

  void deposit(int amount)
  {
    if (amount <= 0)
      throw "amount should be greater than 0!\n";
    balance += amount;
    cout << amount << " rs is debited successfully!\n";
  }

  void withdraw(int amount)
  {
    if (amount <= balance && amount > 0)
    {
      balance -= amount;
      cout << amount << " rs is debited successfully!\n";
    }
    else if (amount < 0)
      throw "invalid amount entered!\n";
    else
    {
      throw "Your balance is low!\n";
    }
  }

  void display()
  {
    cout << name << " " << acc_no << " " << balance << endl;
  }
};

int main()
{

  Customer A1("Rohit", 1, 1000);
  // Customer A2("Mohit", 1, 1800);
  try
  {
    A1.deposit(500);
    A1.withdraw(-900);
  }
  catch (const runtime_error &e)
  {
    cout << "Exception Occured: " << e.what();
  }
  catch (const bad_alloc &e)
  {
    cout << "Exception Occured: " << e.what();
  }
  catch (...)
  {
    cout << "Exception Occured\n";
  }
}

// int main()
// {
//   try
//   {
//     int *p = new int[1000000000000000];
//     cout << "Memory allocation is successfull\n";
//     delete[] p;
//   }
//   catch (const bad_alloc &e)
//   {
//     cout << "Exception Occured: " << e.what() << endl;
//   }
// }