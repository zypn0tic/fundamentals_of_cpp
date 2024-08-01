#include<iostream>
int main(){

  int i,n;
  std::cout<<"Enter any number : ";
  std::cin>>n;
  for (i=1;i<=n;i+=1){
    std::cout<<1+(i-1)*2;
    std::cout<<" ";
  }

}
