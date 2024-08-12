#include <iostream>
#include <map> // Map is like dictionary in python
using namespace std;

int main()
{
  map<int, string> m;
  m.insert(pair<int, string>(1, "John"));
  m.insert(pair<int, string>(2, "Hali"));
  m.insert(pair<int, string>(1, "Honduras"));

  map<int, string>::iterator it;
  for (it = m.begin(); it != m.end(); it++)
  {
    cout << it->first << " " << it->second << endl;
  }

  map<int, string>::iterator it1;
  it1 = m.find(2);
  cout << "Value found is ";
  cout << it1->first << " " << it1->second << endl;
}
