// Throw and catch is communication between two functions.

#include <iostream>
using namespace std;

int division(int a, int b)
{
  if (b == 0)
    throw 45;
  return a / b;
}
int main()
{
  int x = 10, y = 0, z;
  try
  {
    if (y == 0)
      throw 1;

    z = division(x, y);
    cout << z << endl;
  }
  catch (int e)
  {
    cout << "Division by zero " << e << endl;
  }
  cout << "Bye" << endl;
}