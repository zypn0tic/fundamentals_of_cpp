#include<iostream>
int main(){
  int m,n,i,j;

  std::cout<<"Enter number of rows first and column second like m*n: "<<std::endl;
  std::cin>>m;
  std::cin>>n;

  for(i=1;i<=m;i++){
    int a = 1; //a must be declared inside the loop of i.
    for(j=1;j<=i;j++){
      std::cout<<a<<" "; //std::cout<<2*j-1<<" "; can also be done.
      a+=2;
    }

    std::cout<<"\n";
  }

}

