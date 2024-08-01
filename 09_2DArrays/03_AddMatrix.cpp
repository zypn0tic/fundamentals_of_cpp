#include<iostream>

int main(){
  int m,n;
  std::cout<<"Enter m : "<<std::endl;
  std::cin>>m;
  std::cout<<"Enter n : "<<std::endl;
  std::cin>>n;

  int arr[m][n];
  std::cout<<"Enter matrix 1"<<std::endl;
  for (int i=0;i<m;i++){
    for (int j=0;j<n;j++){
      std::cin>>arr[i][j];
    }
  }

  int brr[m][n];
  std::cout<<"Enter matrix 2 of same order to add"<<std::endl;
  for (int i=0;i<m;i++){
    for (int j=0;j<n;j++){
      std::cin>>brr[i][j];
    }
  }

  std::cout<<"Matrix 1 is : "<<std::endl;
  for (int i=0;i<m;i++){
    for (int j=0;j<n;j++){
      std::cout<<arr[i][j]<<" ";
    }
    std::cout<<std::endl;
  }

  std::cout<<"Matrix 2 is : "<<std::endl;
  for (int i=0;i<m;i++){
    for (int j=0;j<n;j++){
      std::cout<<brr[i][j]<<" ";
    }
    std::cout<<std::endl;
  }

  int sum[m][n];
  std::cout<<"The sum of entered maxrices is : "<<std::endl;
  for (int i=0;i<m;i++){
    for (int j=0;j<n;j++){
      sum[i][j]=arr[i][j]+brr[i][j];
    }
  }

  for (int i=0;i<m;i++){
    for (int j=0;j<n;j++){
      std::cout<<sum[i][j]<<" ";
    }
    std::cout<<std::endl;
  }
  
}

