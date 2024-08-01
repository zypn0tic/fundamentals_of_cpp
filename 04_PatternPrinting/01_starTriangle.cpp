#include<iostream>
int main(){
  int m,n,i,j;

  std::cout<<"Enter number of rows first and column second like m*n: "<<std::endl;
  std::cin>>m;
  std::cin>>n;

  for(i=1;i<=m;i++){
    for(j=1;j<=n;j++){
      std::cout<<"* ";
    }
    std::cout<<"\n";
  }

}  