#include <iostream>
using namespace std;

class Parent
{
private:
  int a;

protected:
  int b;

public:
  int c;

  void funParent()
  {
    a = 10;
    b = 5;
    c = 15;
  }
};

class Child : private Parent
{

private:
protected:
public:
  void funChild()
  {
    // a = 10;
    b = 20;
    c = 25;
  }
};

class GrandChild : public Child
{
public:
  void funGrandChild()
  {
    // a = 10;
    // b = 15;
    // c = 10;
  }
};

int main()
{
  Child c;
  // c.a = 10;
  // c.b = 15;
  // c.c = 5;
}