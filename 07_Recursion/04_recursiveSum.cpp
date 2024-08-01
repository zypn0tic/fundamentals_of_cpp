#include<iostream>

int recursiveSum(int a){
  if (a==0){
    return 0;
  }
  else{
    int result = a + recursiveSum(a-1);
    std::cout<<"Sum of 1 to "<<a<<" is "<<result<<std::endl;
    return result;
  }  
}

int main(){
  int n;
  std::cout<<"Enter n : ";
  std::cin>>n;
  recursiveSum(n);
}

