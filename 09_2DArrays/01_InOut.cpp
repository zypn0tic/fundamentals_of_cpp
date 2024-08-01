#include<iostream>

int main(){
  int m,n;
  std::cout<<"Enter m : "<<std::endl;
  std::cin>>m;
  std::cout<<"Enter n : "<<std::endl;
  std::cin>>n;

  int arr[m][n];
  std::cout<<"Enter 2D Array in form of "<<m<<" x "<<n<<" starting from 0 x 0"<<std::endl;

  for (int i=0;i<m;i++){
    for (int j=0;j<n;j++){
      std::cin>>arr[i][j];
    }
  }

  //Normal Matrix or 2D Array
  for (int i=0;i<m;i++){
    for (int j=0;j<n;j++){
      std::cout<<arr[i][j]<<" ";
    }
    std::cout<<std::endl;
  }

  std::cout<<std::endl;

  //Transpose of Matrix or 2D Array
  for (int j=0;j<n;j++){
    for (int i=0;i<m;i++){
      std::cout<<arr[i][j]<<" ";
    }
    std::cout<<std::endl;
  }

  //Also can be initialize by :
  int brr[4][2]={{1234,56},{1256,43},{1464,32},{1312,96}};
}