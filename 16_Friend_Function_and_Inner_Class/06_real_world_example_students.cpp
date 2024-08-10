#include <iostream>
using namespace std;

class student
{
public:
  int roll;
  string name;

  static int addNo;
  student(string n)
  {
    addNo++;
    roll = addNo;
    name = n;
  }
  void display()
  {
    cout << "Name is : " << name << endl;
    cout << "Roll Number is : " << roll << endl;
  }
};

int student::addNo = 0;

int main()
{
  student s1("John");
  student s2("Kalpit");
  student s3("Khan");

  s1.display();
  s2.display();
  s3.display();
  cout << "Number of admission are : " << student::addNo << endl;
}