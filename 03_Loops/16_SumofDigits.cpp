#include<iostream>
#include<limits>
int main(){

  int ld,sum=0,n;
  std::cout<<"Enter any number : ";
  std::cin>>n;

  while(n!=0){
    ld = n%10;
    sum = sum+ld;
    n /= 10;
  }

  std::cout<<"The sum is : "<<sum<<std::endl;

}  