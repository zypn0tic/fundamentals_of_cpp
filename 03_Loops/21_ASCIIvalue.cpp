#include<iostream>
int main(){
  int i;
  for(i=65;i<=90;i++){
    std::cout<<i;
    char ch = (char)i;
    std::cout<<" "<<ch<<std::endl;
  }
}