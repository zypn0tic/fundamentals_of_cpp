#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ofstream outfile("my.txt", ios::trunc); // two mode trunc and append, truc by default -> it deletes the old file if there is any and creates new with same name.
  outfile << "Hello Bro" << endl;
  outfile << 69 << endl;
  outfile.close();
}
