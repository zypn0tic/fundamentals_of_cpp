#include<iostream>
int main(){
  int m,n,i,j,a=1;

  std::cout<<"Enter number of rows first and column second like m*n: "<<std::endl;
  std::cin>>m;
  std::cin>>n;

  int mid = n/2+1;
  for(i=1;i<=m;i++){
    for(j=1;j<=n;j++){
      if(i==mid || j==mid){
        std::cout<<"* ";
      }
      else{
        std::cout<<"  ";
      }
     }   
      std::cout<<"\n";
    }
}                  