#include<iostream>
int main(){

  int a,b,c;
  std::cout<<"Enter first side of triangle"<<std::endl; 
  std::cin>>a;
  std::cout<<"Enter second side of triangle"<<std::endl; 
  std::cin>>b;
  std::cout<<"Enter third side of triangle"<<std::endl;
  std::cin>>c;

  if((a+b)>c && (b+c)>a && (a+c)>b){
    std::cout<<"Triangle is possible"<<std::endl;
  }
  else{
    std::cout<<"Triangle is not possible"<<std::endl;
  }

}






