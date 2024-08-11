#include <iostream>

class Base
{
public:
  // Constructor
  Base()
  {
    std::cout << "Base Constructor called!" << std::endl;
  }

  // Virtual Destructor
  virtual ~Base()
  {
    std::cout << "Base Destructor called!" << std::endl;
  }

  // Virtual function
  virtual void display()
  {
    std::cout << "Hello from Base!" << std::endl;
  }
};

class Derived : public Base
{
public:
  // Constructor
  Derived()
  {
    std::cout << "Derived Constructor called!" << std::endl;
  }

  // Destructor
  ~Derived()
  {
    std::cout << "Derived Destructor called!" << std::endl;
  }

  // Overriding the display function
  void display() override
  {
    std::cout << "Hello from Derived!" << std::endl;
  }
};

int main()
{
  // Creating a pointer to Base class and assigning it an object of Derived class
  Base *obj = new Derived();

  // Calling a member function
  obj->display();

  // Deleting the object
  delete obj;

  // The destructors will be called in the correct order due to the virtual destructor in Base
  return 0;
}