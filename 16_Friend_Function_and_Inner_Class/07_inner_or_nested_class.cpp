// To reduce complexity

#include <iostream>
using namespace std;

class Outer
{
public:
  class Inner
  {
  public:
    string display()
    {
      return "This is display of inner class ";
    }
  };
  Inner fun()
  {
    return I;
  }
  Inner I;
};

int main()
{
  Outer O;
  cout << "This is example of nested class" << endl;
  cout << O.fun().display() << endl;
  cout << endl;
}