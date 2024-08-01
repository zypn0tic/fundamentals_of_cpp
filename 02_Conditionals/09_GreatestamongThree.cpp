#include<iostream>
int main(){

  int a,b,c;

  std::cout<<"Enter first number"<<std::endl; 
  std::cin>>a;
  std::cout<<"Enter second number"<<std::endl; 
  std::cin>>b;
  std::cout<<"Enter third number"<<std::endl;
  std::cin>>c;

  if((a>b) && (a>c)){
    std::cout<<a<<"is greatest";
  }
  else if((b>c) && (b>a)){
    std::cout<<b<<"is greatest";
  }
  else{
    std::cout<<c<<"is greatest";
  }

}  