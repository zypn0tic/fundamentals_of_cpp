#include<iostream>
#include<climits>
#include<cmath>

int main(){
  int m,n;
  std::cout<<"Enter m : "<<std::endl;
  std::cin>>m;
  std::cout<<"Enter n : "<<std::endl;
  std::cin>>n;

  int arr[m][n];
  std::cout<<"Enter your matrix"<<std::endl;
  for (int i=0;i<m;i++){
    for (int j=0;j<n;j++){
      std::cin>>arr[i][j];
    }
  }

  std::cout<<"Entered Matrix is : "<<std::endl;
  for (int i=0;i<m;i++){
    for (int j=0;j<n;j++){
      std::cout<<arr[i][j]<<" ";
    }
    std::cout<<std::endl;
  }

  int product=1;
  for (int i=0;i<m;i++){
    for (int j=0;j<n;j++){
      product *= arr[i][j];
    }
  }

  std::cout<<"The product of all element of the given is : "<<product<<std::endl;

}
