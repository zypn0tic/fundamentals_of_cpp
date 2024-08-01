#include<iostream>
int main(){
  int sum=0,product=1,n;
  std::cout<<"How much data do you want to store in that array : "<<std::endl;
  std::cin>>n;
  int arr[n];
  std::cout<<"Enter the elements of array"<<std::endl;
  for(int i=0;i<n;i++){
    std::cin>>arr[i];
    product *= arr[i];
    sum += arr[i];
  }
  std::cout<<"Sum of "<<n<<" element of array is "<<sum<<std::endl;
  std::cout<<"Product of "<<n<<" element of array is "<<product<<std::endl;
}