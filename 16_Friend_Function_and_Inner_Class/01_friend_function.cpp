#include <iostream>
using namespace std;

class Test
{
public:
  int a;

protected:
  int b;

private:
  int c;

  friend void function();
};

void function()
{
  Test t;
  t.a = 92;
  t.b = 34; // can be accessed upon an object, you cannot access directly.
  t.c = 43;
}

int main()
{
  cout << "This is demo of friend function" << endl;
}