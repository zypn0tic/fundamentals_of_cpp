#include<iostream>
int main(){

  int a=0,rev=0,n,b;
  std::cout<<"Enter any number : ";
  std::cin>>n;
  b=n;

  while(n!=0){
    a=n%10;
    rev=(rev*10)+a;
    n=n/10;
  }

  std::cout<<"The reverse of the given number is : "<<rev<<" and the sum is "<<rev+b<<std::endl;

}    