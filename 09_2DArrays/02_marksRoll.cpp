#include<iostream>

int main(){
  int m,n;
  std::cout<<"Enter m : "<<std::endl;
  std::cin>>m;
  std::cout<<"Enter n : "<<std::endl;
  std::cin>>n;

  int arr[m][n];
  std::cout<<"Enter roll number and marks side by side"<<std::endl;

  for (int i=0;i<m;i++){
    for (int j=0;j<n;j++){
      std::cin>>arr[i][j];
    }
  }

  for (int i=0;i<m;i++){
    for (int j=0;j<n;j++){
      std::cout<<arr[i][j]<<" ";
    }
    std::cout<<std::endl;
  }
}

