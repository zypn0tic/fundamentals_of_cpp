#include <iostream>
using namespace std;

class Rectangle
{
private:
  int length;
  int breadth;

public:
  void setLength(int a)
  {
    if (a > 0)
    {
      length = a;
    }
    else
    {
      length = 1;
    }
  }

  void setBreadth(int b)
  {
    if (b > 0)
    {
      breadth = b;
    }
    else
    {
      breadth = 1;
    }
  }

  int getLength() { return length; }
  int getBreath() { return breadth; }
  int area()
  {
    return length * breadth;
  }
  int perimeter()
  {
    return 2 * (length + breadth);
  }
};

int main()
{
  Rectangle r1;
  r1.setLength(10);
  r1.setBreadth(5);
  cout << "The are of Rectangle is " << r1.area() << endl;
  cout << "The perimeter of Rectangle is " << r1.perimeter() << endl;
}
