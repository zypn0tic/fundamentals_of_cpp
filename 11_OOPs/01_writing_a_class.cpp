#include <iostream>

class Rectangle
{
public:
  int length;
  int breadth;

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

  Rectangle r1;
  Rectangle r2;

  r1.length = 10;
  r1.breadth = 5;
  std::cout << r1.area() << std::endl;
  std::cout << r1.perimeter() << std::endl;

  r2.length = 15;
  r2.breadth = 10;
  std::cout << r2.area() << std::endl;
  std::cout << r2.perimeter() << std::endl;
}
