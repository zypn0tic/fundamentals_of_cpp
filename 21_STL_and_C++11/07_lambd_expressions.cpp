#include <iostream>
using namespace std;

// [capture_list](parameter_list) -> return type {body} // this is syntax.
// Lambda expressions are more like inline functions but they have the features of a function.
// Local variables can be accessed.

int main()
{
  // Example 1: Lambda with no parameters and no return value
  []()
  { cout << "Hello"; }(); // This will define and call the function.

  // Example 2: Lambda with parameters and no return value
  [](int x, int y)
  { cout << "Sum is: " << x + y << endl; }(10, 5);

  // Example 3: Lambda with parameters and a return value
  int sum = [](int x, int y)
  { return x + y; }(10, 5);
  cout << "Sum is: " << sum << endl;

  // Example 4: Lambda assigned to a variable
  auto greet = []()
  { cout << "Hello"; };
  greet();

  // Example 5: Lambda capturing local variables by value
  int a = 10, b = 20;
  auto captureByValue = [a, b]()
  { cout << "Captured by value: " << a << " and " << b << endl; };
  captureByValue();

  // Example 6: Lambda capturing local variables by reference
  auto captureByReference = [&a, &b]()
  { cout << "Captured by reference: " << a << " and " << b << endl; };
  captureByReference();

  // Example 7: Lambda with mutable keyword to modify captured variables
  auto mutableLambda = [a]() mutable
  { a += 10; cout << "Modified captured value: " << a << endl; };
  mutableLambda();
  cout << "Original value of a: " << a << endl;

  // Example 8: Lambda with explicit return type
  auto explicitReturnType = [](int x, int y) -> int
  { return x * y; };
  cout << "Product is: " << explicitReturnType(10, 5) << endl;

  return 0;
}