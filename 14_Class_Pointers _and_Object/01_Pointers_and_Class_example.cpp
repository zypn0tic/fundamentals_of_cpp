
#include <iostream>
using namespace std;

class Base
{
public:
  void fun1()
  {
    cout << "fun1 is base" << endl;
  }
};

class Derived : public Base
{
public:
  void fun2()
  {
    cout << "fun2 is derived" << endl;
  }
};

int main()
{
  Derived d;
  Base *ptr = &d;
  ptr->fun1();
  // ptr->fun2(); // Not possible
}