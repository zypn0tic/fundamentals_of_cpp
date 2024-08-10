// Write classes to demonstrate polymorphism
// Base class shape
// Derived class -> 1.Rectangle, 2.Circle

#include <iostream>
using namespace std;

class Shape
{
public:
  virtual float area() = 0;
  virtual float perimeter() = 0;
};

class Rectangle : public Shape
{
private:
  float length;
  float breadth;

public:
  Rectangle(float length, float breadth)
  {
    this->length = length;
    this->breadth = breadth;
  }
  float area()
  {
    return length * breadth;
  }
  float perimeter()
  {
    return 2 * (length + breadth);
  }
};

class Circle : public Shape
{
private:
  float radius;

public:
  Circle(float radius)
  {
    this->radius = radius;
  }
  float area()
  {
    return 3.1425 * radius * radius;
  }
  float perimeter()
  {
    return 2 * 3.1425 * radius;
  }
};

int main()
{
  float l, b, r;
  cout << "What's the length of Rectangle ?" << endl;
  cin >> l;
  cout << "What's the breadth of Rectangle ?" << endl;
  cin >> b;
  cout << "What's the radius of Circle ?" << endl;
  cin >> r;

  Shape *pts = new Rectangle(l, b);
  cout << "The area of Rectangle is : " << pts->area() << endl;
  cout << "The perimeter of Rectangle is : " << pts->perimeter() << endl;

  pts = new Circle(r);
  cout << "The area of Circle is : " << pts->area() << endl;
  cout << "The perimeter of Circle is : " << pts->perimeter() << endl;
}

// This is fucking Polymorphism
