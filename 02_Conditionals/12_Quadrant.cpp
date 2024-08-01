#include <iostream>
#include <limits>

int main()
{

  int a, b;

  std::cout << "Enter the value of x" << std::endl;
  std::cin >> a;
  std::cout << "Enter the value of y" << std::endl;
  std::cin >> b;

  if (a == 0 && b == 0)
 {
    std::cout << "Lies at Origin" << std::endl;
 }
  else if (a > 0 && b > 0)
 {
    std::cout << "Given point Lies in first quadrant" << std::endl;
 }
   else if (a < 0 && b > 0)
 {
   std::cout << "Given point Lies in second quadrant" << std::endl;
 }
 else if (a < 0 && b < 0)
 {
   std::cout << "Given point Lies in third quadrant" << std::endl;
 }
 else if (a > 0 && b < 0)
 {
   std::cout << "Given point Lies in fourth quadrant" << std::endl;
 }
 
 return 0;

}