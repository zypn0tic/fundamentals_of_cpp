#include<iostream>
int main(){

  int i,n,a=0;
  std::cout<<"Enter any number : ";
  std::cin>>n;

  for(i=1;i<=100;i++){
    if(i%2==0){
      continue;
    }
    else{
      std::cout<<i<<" ";
    }
  }

}  


