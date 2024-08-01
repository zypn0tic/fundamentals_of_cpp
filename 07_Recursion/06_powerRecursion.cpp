#include<iostream>

int power(int a,int b){
  if(b==0) return 1;
  return (a * power(a,b-1));
}

int main(){
  int p,q;
  std::cout<<"Enter base : ";
  std::cin>>p;
  std::cout<<"Enter power : ";
  std::cin>>q;
  std::cout<<p<<" raised to the power "<<q<<" is "<<power(p,q)<<std::endl;
}