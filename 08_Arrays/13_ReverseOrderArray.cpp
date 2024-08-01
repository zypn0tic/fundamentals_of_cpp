#include<iostream>
int main(){
  int i,j,n;
  std::cout<<"How many array : "<<std::endl;
  std::cin>>n; 
  int arr[n];
  std::cout<<"Enter elements of array : "<<std::endl;
  for (int i=0;i<n;i++){
    std::cin>>arr[i];
  }
  std::cout<<std::endl;
  for (int i=0;i<n;i++){
  std::cout<<arr[i]<<std::endl;
  }
  std::cout<<std::endl;
  for (i=n-1;i>=0;i--){
    for (j=i;j>n;j++){
      arr[j]=arr[i];     
    }      
    std::cout<<arr[j]<<std::endl;
  }

}