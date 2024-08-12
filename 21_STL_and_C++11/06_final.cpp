#include <iostream>

using namespace std;
class Parent
{
public:
  virtual void show() final
  {
    // Implementation of show in Parent
  }
};

class Child : public Parent
{
  // No override of show function here
};
