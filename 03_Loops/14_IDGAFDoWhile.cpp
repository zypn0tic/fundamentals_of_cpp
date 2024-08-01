#include<iostream>
int main(){

  int n;
  std::cout<<"Enter any number : ";
  std::cin>>n;
  do{
    std::cout<<"I don't give a fuck about do-while loop "<<n<<std::endl;
    n--;
  } while(n>=1);
}
