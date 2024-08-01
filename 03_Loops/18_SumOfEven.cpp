#include<iostream>
#include<limits>
int main(){

  int ld,sum=0,n;
  std::cout<<"Enter any number : ";
  std::cin>>n;

  while(n!=0){
    ld = n%10;
    if (ld%2==0){
      n /= 10;
      sum = sum+ld;
    }
    else{
      n /= 10;
      continue;
    }
  }

  std::cout<<"The sum is of even digits is : "<<sum<<std::endl;

}  