#include <list>
#include <iostream>
using namespace std;

main()
{
  list<int> l = {10, 30, 50, 70, 100};
   l.push_back(25);
  l.push_back(34);
  l.pop_back();
  for (int x : l)
  {
    cout << x << endl;
  }
}
