#include<iostream>

int fibb(int a){
  if(a==0 || a==1 || a==2) return 1; //Remember base case in Recursive Function
  return (fibb(a-1) + fibb((a-1)-1)); //Eular's tour tree structure 
}

int main(){
  int n;
  std::cout<<"Enter n : ";
  std::cin>>n;
  std::cout<<fibb(n);
}