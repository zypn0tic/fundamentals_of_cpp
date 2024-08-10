#include <iostream>
using namespace std;
// Function overriding means redefing a funtion of parent class in child class.

class parent
{
public:
  void func1() // Refer line 26 last part. If we write virtual infront of void, the pointer will call child class
  {
    cout << "This is parent class" << endl;
  }
};

class child :public parent
{
public:
  void func1()
  {
    cout << "This is child class" << endl;
  }
};

int main()
{
  child c;
  parent *ptr= &c; // Function is called based on pointer not and object until it is real.
  ptr->func1();
}
