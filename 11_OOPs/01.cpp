#include <iostream>

int main()
{
  /*   char arr[6] = {'K','a','l','p','i','t'};
    for (int i=0;i<6;i++){
      std::cout<<arr[i];
    }
    std::cout<<"Kalpit is a Student"<<std::endl;
  */

  /*   std::string str = "Kalpit is a good student";
    std::cout<<str<<std::endl;
  */

  /*
    let us suppose a strint names string str = "Kalpit". The size of "Kalpit" is 6 but
    technically speaking the value is 7 because It stores it's values like in array
    including '\0' ( i.e null character which ascii value is 0 ) at last to find the end of
    string. Also an array includin '\0' is technically a string.
  */

  std::string s;
  std::cout << "Enter a string : ";
  std::getline(std::cin, s);
  std::cout << s << std::endl;
}