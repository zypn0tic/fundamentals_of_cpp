//Used if you want to skip a round
//Print no. from 1 to 20 except 3 and 8

#include<iostream>
int main(){

  int i,n,a=0;
  std::cout<<"Enter any number : ";
  std::cin>>n;

  for(i=1;i<n;i++){
    if(i==3 || i==8){
      continue;
    }
    else{
      std::cout<<i<<" ";
    }
  }




}