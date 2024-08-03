#include <iostream>
using namespace std;

class Rectangle
{
private:
  int length;
  int breadth;

public:
  void setLength(int l) // setXXX -> are typically called  Mutator functions.
  {
    if (length > 0)
    {
      length = l;
    }
    else
    {
      length = 0;
    }
  }

  void setBreadth(int b)
  {
    if (breadth > 0)
    {
      breadth = b;
    }
    else
    {
      breadth = 0;
    }
  }

  int getLength() // getXXX -> are typically called Accessor functions.
  {
    return length;
  }

  int getBreadth()
  {
    return breadth;
  }

  int area()
  {
    return length * breadth;
  }

  int perimeter()
  {
    return (2 * (length + breadth));
  }
};

int main()
{
  Rectangle r;
  r.setLength(10);
  r.setBreadth(5);

  cout << "The length of Rectangle is " << r.getLength() << endl;
  cout << "The breadth of Rectangle is " << r.getBreadth() << endl;

  cout << "The area of Rectangle is " << r.area() << endl;
  cout << "The perimeter of Rectangle is " << r.perimeter() << endl;
}