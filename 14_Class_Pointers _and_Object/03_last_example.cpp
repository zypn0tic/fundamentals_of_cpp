#include <iostream>
using namespace std;

class BasicCar
{
public:
  void start()
  {
    cout << "car started" << endl;
  }
};

class AdvancedCar : public BasicCar
{
public:
  void playMusic()
  {
    cout << "Music Player" << endl;
  }
};

int main()
{
  AdvancedCar a;
  BasicCar *ptr = &a; //
  ptr->start();
  // ptr->playMusic(); // same thing haha
}