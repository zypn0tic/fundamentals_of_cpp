#include<iostream>
int main(){

  int i,n,a;
  std::cout<<"Enter any number : ";
  std::cin>>n;
  for (i=n/2;i>=1;i--){
    if (n%i==0){
      a = i;
      std::cout<<"The highest factor of "<<n<<" is : "<<a<<std::endl;
      break;
    }
  }
}
