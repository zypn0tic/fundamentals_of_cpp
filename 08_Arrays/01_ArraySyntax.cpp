#include<iostream>

int main(){

  int n;
  std::cout<<"How much Array? : ";
  std::cin>>n;
  int arr[n];    
  std::cout<<"Enter items in array : ";
  for(int i=0;i<n;i++){
    std::cin>>arr[i];
  }
  
 /*   int arr[5]; //Array declaration, indexing starts from zero.
  arr[0] = 5; //set or initialize
  arr[1] = 6; 
  arr[2] = 7; 
  arr[3] = 8; 
  arr[4] = 9;
 */
  for(int i=0;i<5;i++){//Array can be updated like arr[2]=34; now third element's value will be 34
    std::cout<<arr[i]<<" ";
  }

 /*   std::cout<<arr[0]<<" ";
  std::cout<<arr[1]<<" ";
  std::cout<<arr[2]<<" ";
  std::cout<<arr[3]<<" ";
  std::cout<<arr[4]<<" "; */
}