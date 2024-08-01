#include<iostream>
int main(){
  int n,x,a=0,b=0;
  std::cout<<"How much data do you want to store in that Array : "<<std::endl;
  std::cin>>n;
  int arr[n];
  std::cout<<"Enter Elements of Array : "<<std::endl;
  for(int i=1;i<=n;i++){
    std::cin>>arr[i];
    if(i%2==0){
      a += arr[i];
    }
    else{
      b += arr[i];
    }
  }
  std::cout<<"The difference is "<<a-b<<std::endl;
}