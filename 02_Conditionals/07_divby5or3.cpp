#include<iostream>
int main(){

  int n;

  std::cout<<"Enter any Number : ";
  std::cin>>n;
  std::cout<<"The number is : ";
  std::cout<<n;

  if (n%5==0 || n%3==0) {
    std::cout<<" and is divisible by 5 or 3 \n";
  }
  else if (n%5==0){
    std::cout<<" and is only divisible by 5 \n";
  }
  else if (n%3==0){
    std::cout<<" and is only divisible by 3 \n";
  }
  else {
    std::cout<<" and is not divisible by 5 and 3 \n";
  }
}

