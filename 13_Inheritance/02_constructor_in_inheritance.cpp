#include <iostream>
#include <cstring>
using namespace std;

class Base
{
public:
  Base()
  {
    cout << "This is not param Base constructor" << endl;
  }
  Base(int x)
  {
    cout << "This is parameter of class Base " << x << endl;
  }
};

class Derived : public Base
{
public:
  Derived()
  {
    cout << "This is non param default of derived class" << endl;
  }
  Derived(int y)
  {
    cout << "This is parameter of derived class " << y << endl;
  }
  Derived(int x, int y) : Base(x)
  {
    cout << "Param of Derived" << y << endl;
  }
};

int main()
{
  Derived d(5, 10);
  // Derived d2(10);
  return 0;
}
