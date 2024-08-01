#include<iostream>
#include<limits>
int main(){

  int n,i=0;
  std::cout<<"Enter any number : ";
  std::cin>>n;
  
  while(n!=0){
    n=n/10;
    i++; 
    
  }

  std::cout<<"The number of digits are : "<<i<<std::endl;

}  