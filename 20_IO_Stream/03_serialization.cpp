#include <iostream>
#include <fstream>
using namespace std;

class Student
{
public:
  string name;
  int roll;
  string branch;

  friend ofstream &operator<<(ofstream &ofs, Student &s);
};
ofstream &operator<<(ofstream &ofs, Student &s)
{
  ofs << s.name << " " << s.roll << " " << s.branch << endl;
  return ofs;
}
int main()
{
  Student s1;
  s1.name = "Alberto";
  s1.roll = 69;
  s1.branch = "Quantum Mechanics";

  ofstream ofs("Student.txt", ios::app);
  ofs << s1;
  ofs.close();
}
