/* *pointers - Access the value of the variable whose address is in the pointer - using derefrence operator or *operator. */

#include<iostream>

int main(){
  int x = 2;
  int *p = &x;
  std::cout<<p<<std::endl;        
  std::cout<<&x<<std::endl;
  std::cout<<x<<std::endl;
  std::cout<<*p<<std::endl;
  std::cout<<&p<<std::endl;

}