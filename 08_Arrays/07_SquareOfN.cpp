#include<iostream>
int main(){
  int n;
  std::cout<<"How much data do you want to store in that array : "<<std::endl;
  std::cin>>n;
  int arr[n];
  for(int i=1;i<=n;i++){
    arr[i] = i; 
    std::cout<<"The square numbers of "<<i<< " is "<<arr[i]*arr[i]<<std::endl;
  }

}