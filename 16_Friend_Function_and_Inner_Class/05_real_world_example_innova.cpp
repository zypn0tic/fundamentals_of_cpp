#include <iostream>
using namespace std;

class Innova
{
public:
  static int price;
  static int getprice()
  {
    return price;
  }
};

int Innova::price = 20;

int main()
{
  Innova i1, i2, i3;
  cout << i1.price << endl;
  cout << i2.price << endl;
  cout << i3.getprice() << endl;
}