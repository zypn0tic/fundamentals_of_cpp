#include<iostream>

int main(){

  std::string s;
  std::cout<<"Enter a string : "<<std::endl;
  std::getline(std::cin, s);
  std::cout<<s.length()<<std::endl; //gives the length of string including whitespaces.
  std::cout<<s.size()<<std::endl; //gives the length of string including whitespaces. same as s.length().
  /*
  let us suppose a strint names string str = "Kalpit". The size of "Kalpit" is 6 but
  technically speaking the value is 7 because It stores it's values like in array 
  including '\0' ( i.e null character which ascii value is 0 ) at last to find the end of 
  string. Also an array includin '\0' is technically a string.
  */
}