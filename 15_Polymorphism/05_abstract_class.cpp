#include <iostream>
using namespace std;

class car
{
public:
  virtual void start() = 0; // pure virtual function cannot create a an object in main function as it is pure virtual function but you can have a pointer of it.
  // main purpose is to achieve polymorphism and generaliation.
};

class Innova : public car
{
public:
  void start()
  {
    cout << "Innova started" << endl;
  }
};

class Swift : public car
{
public:
  void start()
  {
    cout << "Swift started" << endl;
  }
};

int main()
{
  // car c; you can't have the object of class car as it contains only pure virtual functions, refer line 7.
  car *pt = new Innova;
  pt->start();
  pt = new Swift;
  pt->start();
}
