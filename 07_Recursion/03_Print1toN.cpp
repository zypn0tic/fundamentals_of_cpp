/* When you work after call and before the things will exactly be reversed. */


#include<iostream>

void greet(int n){
  if (n==0) return;
  greet(n-1); //For 1 to N.
  std::cout<<n<<std::endl;
}


int main(){
  int a;
  std::cout<<"Enter n : ";
  std::cin>>a;
  greet(a);
}  