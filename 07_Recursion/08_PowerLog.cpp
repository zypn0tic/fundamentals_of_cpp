#include<iostream>

int power(int a,int b){
  if(b==0) return 1;
  if(b%2==0){
    return (a*power(a,((b/2)-1))*(a*power(a,((b/2)-1))));
  }
  else{
    return (a * power(a,b-1));
  }

  return 0;
}

int main(){
  int p,q;
  std::cout<<"Enter base : ";
  std::cin>>p;
  std::cout<<"Enter power : ";
  std::cin>>q;
  std::cout<<p<<" raised to the power "<<q<<" is "<<power(p,q)<<std::endl;
}