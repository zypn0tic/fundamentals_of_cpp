#include<iostream>

int main(){
  std::string s;
  std::cout<<"Enter a string : ";
  std::getline(std::cin, s);
  //std::cout<<s[5]<<std::endl; //Indexing like in Array.
  std::cout<<s<<std::endl;
  s[0] = 'A';
  std::cout<<s<<std::endl;

}