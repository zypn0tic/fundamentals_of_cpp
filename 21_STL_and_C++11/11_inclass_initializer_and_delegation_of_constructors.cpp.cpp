#include <iostream>
#include <memory>

using namespace std;
// one constructor can call another in same class

class Test
{
  int x = 10;
  int y = 13;

public:
  Test(int a, int b)
  {
    x = a;
    y = b;
  }
  Test() : Test(1, 1) {}
};

int main()
{
}