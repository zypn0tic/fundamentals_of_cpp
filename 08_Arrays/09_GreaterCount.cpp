#include<iostream>
int main(){
  int n,x,b=0;
  std::cout<<"How much data do you want to store in that Array : "<<std::endl;
  std::cin>>n;
  std::cout<<"Enter you element x : ";
  std::cin>>x;
  int arr[n];
  std::cout<<"Enter Elements of Array : "<<std::endl;
  for(int i=1;i<=n;i++){
    std::cin>>arr[i];
    if(arr[i]>x){
      b+=1;
    }
  }
  std::cout<<"There are "<<b<<" Element in array which are greater than "<<x<<std::endl;
}

 