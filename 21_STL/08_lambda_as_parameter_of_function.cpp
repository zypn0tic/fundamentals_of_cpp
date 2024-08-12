#include <iostream>
#include <functional>
using namespace std;

// Function that takes a lambda expression as a parameter
void executeLambda(const function<void(int)> &func, int value)
{
  func(value);
}

int main()
{
  // Lambda expression to print a value
  auto printValue = [](int x)
  { cout << "Value: " << x << endl; };

  // Passing the lambda expression to the function
  executeLambda(printValue, 10);

  // Lambda expression to print the square of a value
  auto printSquare = [](int x)
  { cout << "Square: " << x * x << endl; };

  // Passing the lambda expression to the function
  executeLambda(printSquare, 5);

  return 0;
}
