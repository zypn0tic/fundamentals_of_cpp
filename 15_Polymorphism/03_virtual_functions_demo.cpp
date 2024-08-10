#include <iostream>
using namespace std;

class basicCar
{
public:
  virtual void start()
  {
    cout << "Basic car Started" << endl;
  }
};

class advCar : public basicCar
{
public:
  void start()
  {
      cout << "Advanced car has started" <<endl;
  }
};

int main()
{
  basicCar *pt = new advCar(); // pointer of basic car and object of advanced car.
  pt->start();
}
