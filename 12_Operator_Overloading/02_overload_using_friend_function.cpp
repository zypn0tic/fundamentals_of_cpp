#include <iostream>

class Complex
{
private:
  int real;
  int imaginary;

public:
  Complex(int r = 0, int i = 0)
  {
    real = r;
    imaginary = i;
  }

  void display()
  {
    std::cout << real << " + " << imaginary << "i" << std::endl;
  }

  friend Complex operator+(Complex c1, Complex c2);
};

Complex operator+(Complex c1, Complex c2)
{
  Complex t;
  t.real = c1.real + c2.real;
  t.imaginary = c1.imaginary + c2.imaginary;
  return t;
}

int main()
{
  Complex c1(3, 7);
  Complex c2(5, 4);
  Complex c3;

  c3 = c1 + c2;

  c3.display();
}
