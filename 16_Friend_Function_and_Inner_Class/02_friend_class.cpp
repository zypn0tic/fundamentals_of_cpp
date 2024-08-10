#include <iostream>
using namespace std;

class frn;
class Test
{
public:
  int a;

protected:
  int b;

private:
  int c;

  friend class frn;
};

class frn
{
  Test t;

public:
  frn()
  {
    t.a = 92;
    t.b = 34; // can be accessed upon an object, you cannot access directly.
    t.c = 43;
  }
};

int main()
{
  cout << "This is demo of friend class" << endl;
}