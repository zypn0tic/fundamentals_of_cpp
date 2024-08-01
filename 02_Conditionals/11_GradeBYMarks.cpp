#include<iostream>
#include<limits>
int main(){

  float n;

  std::cout<<"Enter you percentage (0-100) : "<<std::endl;
  std::cin>>n;

  if (n>80 && n<100) {
    std::cout<<"Very Good"<<std::endl;
  }
  else if (n>60) {
    std::cout<<"Good"<<std::endl;
  }
  else if (n>40) {
    std::cout<<"Average"<<std::endl;
  }
  else {
    std::cout<<"Fail"<<std::endl;
  }

  return 0;

}