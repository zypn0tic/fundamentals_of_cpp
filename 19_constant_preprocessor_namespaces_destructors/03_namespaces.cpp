#include <iostream>

// Define a namespace called FirstNamespace
namespace FirstNamespace
{
  void display()
  {
    std::cout << "Inside FirstNamespace" << std::endl;
  }
}

// Define another namespace called SecondNamespace
namespace SecondNamespace
{
  void display()
  {
    std::cout << "Inside SecondNamespace" << std::endl;
  }
}

int main()
{
  // Call the display function from FirstNamespace
  FirstNamespace::display();

  // Call the display function from SecondNamespace
  SecondNamespace::display();

  return 0;
}