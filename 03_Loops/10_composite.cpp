#include<iostream>
int main(){

  int i,n,a=0;
  std::cout<<"Enter any number : ";
  std::cin>>n;

  for (i=2;i<=n/2;i++){
    if (n%i==0){
      a++;
      break;
    }
  }

  if (n==1){
    std::cout<<"The number is 1 which is neither prime or composite"<<std::endl;
  }
  else if (a>=1){
    std::cout<<"The number "<<n<<" is composite number "<<std::endl;
  }  
  else{
    std::cout<<"The number "<<n<<" is prime number "<<std::endl;
  } 

}   