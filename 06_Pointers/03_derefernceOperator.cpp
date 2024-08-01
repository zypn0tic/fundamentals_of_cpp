#include<iostream>

int main(){
  int x = 2;
  int *p = &x;
  std::cout<<x<<std::endl;
  std::cout<<*p<<std::endl;
  *p = 45; //x = 45
  std::cout<<x<<std::endl;
}