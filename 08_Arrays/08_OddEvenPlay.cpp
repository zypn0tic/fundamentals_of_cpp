#include<iostream>
int main(){
  int n;
  std::cout<<"How much data do you want to store in that Array : "<<std::endl;
  std::cin>>n;
  int arr[n];
  std::cout<<"Enter Elements of Array : "<<std::endl;
  for(int i=1;i<=n;i++){
    std::cin>>arr[i];
  }
  std::cout<<std::endl;
  for(int i=1;i<=n;i++){
        if(i%2==0){
      std::cout<<arr[i]+10<<std::endl;
    }
    else{
      std::cout<<arr[i]*2<<std::endl;
    }
  }
}

