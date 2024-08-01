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

  int l1,r1,l2,r2,sum=0;
  std::cout<<"Enter coordinates of 1 : "<<std::endl;
  std::cin>>l1;
  std::cin>>r1;
  std::cout<<"Enter coordinates of 2 : "<<std::endl;
  std::cin>>l2;
  std::cin>>r2;

  for (int i=l1;i<=l2;i++){
    for (int j=r1;j<=r2;j++){
      sum+=arr[i][j];
    }
  }

  std::cout<<"Sum of elements from "<<l1<<","<<r1<<" to "<<l2<<","<<r2<<" is "<<sum<<std::endl;

}