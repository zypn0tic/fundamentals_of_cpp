#include<iostream>

int factorial(double n){
  double i,fact = 1;
  if (n==0 || n==1){
    std::cout<<"The factorial is : 1 \n";
  }
  else if (n<0){
    std::cout<<"The factorial of negative number is not possible \n";
  }
  else{
      for (i=1; i<=n; i++){
    fact = fact * i;
    }  
  }  
  return fact;
}


int main(){
  double d,r,n,p,perm,comb;
  std::cout<<"Enter n : ";
  std::cin>>p;
  std::cout<<"Enter r : ";
  std::cin>>r;
  d = p-r;
  double a = factorial(p);
  double b = factorial(r);
  double c = factorial(d);
  perm = a/(c);
  comb =  a/(c*b);
  std::cout<<"The permutation of "<<p<<"P"<<r<<" is "<<perm<<std::endl;
  std::cout<<"The combination of "<<p<<"C"<<r<<" is "<<comb<<std::endl;
 
  return 0;

}
