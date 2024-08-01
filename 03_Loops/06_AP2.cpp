#include<iostream>
int main(){

  int i,n;
  std::cout<<"Enter any number : ";
  std::cin>>n;
  for (i=1;i<=n;i++){
  std::cout<<4+((i-1)*3);
  std::cout<<" ";
  }

}