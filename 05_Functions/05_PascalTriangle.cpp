#include<iostream>

int fact(int x){
  int f =1;
  for(int i=1;i<=x;i++){
    f*=i;
  }
  return f;
}

int ncr(int n, int r){
  int a = fact(n);
  int b = fact(r);
  int c = fact(n-r);
  return a/(b*c);
}

int main(){
  int n;
  std::cout<<"Enter n rows for Pascal's Triangle : ";
  std::cin>>n;
  for(int i=0;i<=n;i++){
      for(int j=0;j<=n-i;j++){
      std::cout<<" ";
    }
    for(int j=0;j<=i;j++){
      std::cout<<ncr(i,j)<<" ";
    }
    std::cout<<std::endl;
  }
}

