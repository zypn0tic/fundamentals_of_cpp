#include<iostream>

int sum(int a, int b){
  int add = 0;
  add = a+b;
  std::cout<<"The of "<<a<<" and "<<b<<" is "<<add<<std::endl;
  return 0;
}

int main(){
  int a = 0,b = 0;
  std::cout<<"Enter any two number : "<<std::endl;
  std::cin>>a;
  std::cin>>b;
  std::cout<<sum(a,b);
}
