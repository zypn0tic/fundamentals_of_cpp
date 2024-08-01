#include<iostream>

void greet(){
  std::cout<<"Hello Prikey"<<std::endl;
  greet();
}

int main(){
  greet();
}

