#include <iostream>
using namespace std;

class Test
{
private:
  int a;
  int b;

public:
  static int count;
  Test()
  {
    a = 10;
    b = 10;
    count++;
  }
  static int getcount()
  {
    // a++; // cannot access not static data member
    return count; // static member function can only access static data member
  }
};

int Test ::count = 0;

int main()
{
  Test t1;
  Test t2;
  cout << t1.count << endl;
  cout << t2.count << endl;
  cout << Test::count << endl;
  cout << Test::getcount << endl; // -> 0
  cout << t1.getcount() << endl;
}
