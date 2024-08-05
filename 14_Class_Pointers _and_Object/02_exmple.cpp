#include <iostream>
using namespace std;

class Rectangle
{
public:
  void area()
  {
    cout << "Area of rectangle" << endl;
  }
};

class Cuboid : public Rectangle
{
public:
  void volume()
  {
    cout << "Cuboid volume" << endl;
  }
};

int main()
{
  Cuboid c;
  // Rectangle *p = &c; // Not possible
  c.area();
  c.volume();
}