//Factorial of first 'n' numbers
#include<iostream>

int main(){
  int n,i,fact=1;

  std::cout<<"Enter any number : ";
  std::cout<<"\n";
  std::cin>>n;

  if (n==0 || n==1){
    std::cout<<"The factorial is : 1 \n";
  }
  else if (n<0){
    std::cout<<"The factorial of negative number is not possible \n";
  }
  else{
      for (i=1; i<=n; i++){
    fact = fact * i;
    std::cout << "The factorial of " << i << " is " << fact << std::endl << std::endl;
    } 
  }
}
