// pointers can be used in objects for dynamic memory allocation.

#include <iostream>
using namespace std;

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

  Rectangle r1; // or Rectangel r1 = new Rectangle(); directly, now assign the value
  Rectangle *ptr;
  ptr = &r1;

  ptr->length = 10;
  ptr->breadth = 5;

  cout << ptr->area() << endl;
  cout << ptr->perimeter() << endl;
}
