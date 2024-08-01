#include<iostream>

int main(){
  int x = 2;
  int y = 5;
  std::cout<<x<<" "<<y<<std::endl; 
  int temp = x;
  x = y;
  y = temp;

  std::cout<<x<<" "<<y<<std::endl;

}