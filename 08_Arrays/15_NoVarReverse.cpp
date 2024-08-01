#include<iostream>

int main(){
  int n;
  std::cout<<"How many elements in that Array : "<<std::endl;
  std::cin>>n;
  int arr[n];
  std::cout<<"Enter elements of that Array : "<<std::endl;
  for (int i=0;i<n;i++){
    std::cin>>arr[i];
  }
  
  int i=0, j=n-1;
  while(i<j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    i++;
    j--;
  }
  std::cout<<std::endl;
  for (int k=n-1;k>=0;k--){
    std::cout<<arr[k]<<std::endl;
  }

}