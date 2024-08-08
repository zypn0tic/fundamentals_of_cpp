#include <iostream>
using namespace std;
// Function overriding means redefing a funtion of parent class in child class.

class parent
{
public:
  void Display()
  {
    cout << "This is parent class" << endl;
  }
};

class child : public parent
{
public:
  void Display()
  {
    cout << "This is child class" << endl;
  }
};

int main()
{
  parent p;
  p.Display(); // p.display::Display() -> to call expicitly the base class
  child c;
  c.Display();
}