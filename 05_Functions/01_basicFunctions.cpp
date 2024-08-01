#include<iostream>
using namespace std;

void greet(){ //void, char, int, float etc. data types can be return type
  cout<<"Good Morning"<<endl;
  cout<<"How are you?"<<endl;
}
int main(){ //main can't be called more than once.
  greet();
  cout<<"Hey!"<<endl;
  greet();

  return 0; //keyword used to end fuction
}