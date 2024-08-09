// Polymorphism -> same block of code but calling different function

#include <iostream>
using namespace std;

class car
{
public:
  virtual void start()
  {
    cout << "Car started" << endl;
  }
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
  car *pt = new Innova;
  pt->start();
  pt = new Swift;
  pt->start();
}
