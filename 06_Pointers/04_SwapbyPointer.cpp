#include<iostream>

void swapfunction(int *p, int *q){ //Remember to use &.
  int temp = *p;
  *p = *q;
  *q = temp;
}

int main(){
  int x,y;
  std::cout<<"Enter x and y : "<<std::endl;
  std::cin>>x;
  std::cin>>y;
  std::cout<<x<<" "<<y<<std::endl;
  swapfunction(&x,&y); //there is a in-built swap function c++ standard library and can be used using std::swap(x,y);
  std::cout<<x<<" "<<y<<std::endl;
}