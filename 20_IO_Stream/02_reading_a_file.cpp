#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ifstream infile;
  infile.open("my.txt"); // file must be existing
  if (infile)
  {
    cout << "True" << endl;
  }
  else
  {
    cout << "False" << endl;
  }

  string str;
  int x;
  infile >> str;
  infile >> x;
  cout << str << " " << x << endl;

  if(infile.eof()) cout << "End of file reached" << endl;
  infile.close();
}