#include<iostream>

int recursiveFactorial(int a){
  if (a==1 || a==0){
    std::cout<<"The factorial of 0 or 1 is 1"<<std::endl;
    return 1;
  }
  else{
    int result = a * recursiveFactorial(a-1);
    std::cout<<"The factorial of "<<a<<" is "<<result<<std::endl;
    return result;
  } 
}

int main(){
  int n;
  std::cout<<"Enter n : ";
  std::cin>>n;
  recursiveFactorial(n);
}