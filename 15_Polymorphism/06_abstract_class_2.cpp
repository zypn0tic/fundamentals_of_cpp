#include <iostream>
using namespace std;

class Base // REusability and polymorphism.
{
public:
  void fun1()
  {
    cout << "This is fun1 base class" << endl;
  }
  virtual void fun2() = 0;
};

class Derived : public Base
{
public:
  void fun2()
  {
    cout << "This is fun2 derived class" << endl;
  }
};

int main()
{
  Derived d1;
  d1.fun1();
  d1.fun2();
}
