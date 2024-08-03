#include <iostream>
class Complex
{
public:
  int real;
  int imaginary;

  Complex(int r = 0, int i = 0)
  {
    this->real = r;
    this->imaginary = i;
  }

  Complex operator+(Complex x) // operator+ is used as operator overeloading, no need to write add function, and line 29 also // Signature of the add function in Complex.
  {
    Complex temp;
    temp.real = real + x.real;
    temp.imaginary = imaginary + x.imaginary;
    return temp;
  }
};

int main()
{
  Complex c1(3, 7);
  Complex c2(5, 4);
  Complex c3;

  c3 = c1 + c2; // c3 = c1.add(c2);
  std::cout << c3.real << " + " << c3.imaginary << "i" << std::endl;
}
