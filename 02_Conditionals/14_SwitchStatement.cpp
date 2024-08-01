#include<iostream>
int main(){

  int a,b;
  char ch;

  std::cout<<"Enter two number"<<std::endl;
  std::cin>>a>>b;
  std::cout<<"Enter '+' to add '-' to subtract '/' to divide '*' for multiply"<<std::endl;
  std::cin>>ch;

  switch (ch){
    case '+':
      std::cout<<"The addition is : "<<a+b<<std::endl;
      break;
    case '-':
      std::cout<<"The subtraction is : "<<a-b<<std::endl;
      break;
    case '*':
      std::cout<<"The multiplication is : "<<a*b<<std::endl;
      break;
    case '/':
      std::cout<<"The division is : "<<a/b<<std::endl;
      break;
    default:
    std::cout<<"Invalid Input"<<std::endl;
  }

  return 0;

}

//true is 1 and false is 0s
//conditions ends here, now loops