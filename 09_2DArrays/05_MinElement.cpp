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
  std::cout<<"Enter you matrix"<<std::endl;
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


  int mn=INT_MAX; 
  for (int i=0;i<m;i++){
    for (int j=0;j<n;j++){
      if (arr[i][j]<mn){
        mn = arr[i][j];
      }
    }
  }

  std::cout<<"The minimum element of given 2D Array is : "<<mn<<std::endl;

}