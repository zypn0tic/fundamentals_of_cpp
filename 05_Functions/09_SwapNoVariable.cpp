#include<iostream>

int main(){
  int x = 2;
  int y = 5;
  std::cout<<x<<" "<<y<<std::endl;
  x = x + y;
  y = x - y;
  x = x - y;
  std::cout<<x<<" "<<y<<std::endl; 
} 