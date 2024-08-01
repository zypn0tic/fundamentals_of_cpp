#include<iostream>
#include<limits>
int main(){

  int ld,product=1,n;
  std::cout<<"Enter any number : ";
  std::cin>>n;

  while(n!=0){
    ld = n%10;
    if (ld==0){
      n /= 10;
      continue;
    }
    else{
      product = product*ld;  
      n /= 10;
    }

  }

  std::cout<<"The product is : "<<product<<std::endl;

}  