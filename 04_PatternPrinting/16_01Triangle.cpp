#include<iostream>
int main(){
  int m,n,i,j,a=1;

  std::cout<<"Enter number of rows first and column second like m*n: "<<std::endl;
  std::cin>>m;
  std::cin>>n;

  for(i=1;i<=m;i++){
    for(j=1;j<=i;j++){
      if((i+j)%2==0){
        std::cout<<1<<" ";
      }
      else{
        std::cout<<0<<" ";
      }
      }   
      std::cout<<"\n";
    }
}

