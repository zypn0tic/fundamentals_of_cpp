//While Loop
//Alternate to for loop
//Used in weird scenario and we don't know how many times we will use loop
//When multiple conditions are there 


#include<iostream>
int main(){

  int i=1,n,a=0;
  std::cout<<"Enter any number : ";
  std::cin>>n;

  while(i<=n){
    std::cout<<i<<std::endl;
    i++;
  }
}
