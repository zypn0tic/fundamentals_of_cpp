#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> v = {34, 65, 45, 56, 89, 78};
  v.push_back(19);
  v.push_back(70);
  v.pop_back();

  // One way to iterate
  // simple iterator -> thanks to C++ 11.
  for (int x : v)
  {
    cout << x << endl;
  }

  // Another way

  /*

  vector<int>::iterator itr
  for (itr.begin; itr!=v.end(); itr++)
  cout << *itr;

  */

  return 0;
}
