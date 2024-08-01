#include<iostream>
#include<cmath>
#include<limits>
int main(){
  int sum=0,temp,product=1,n;
  std::cout<<"How much data do you want to store in that array : "<<std::endl;
  std::cin>>n;
  int arr[n];
  std::cout<<"Enter the elements of array"<<std::endl;
  for(int i=0;i<n;i++){
    std::cin>>arr[i];
  }
  int maximum = arr[0];
  for(int i=0;i<n;i++){ //Method 1
    if (arr[i]>maximum) maximum=arr[i];
  }
  std::cout<<"The Maximum value of array is "<<maximum<<std::endl;

/*   for(int i=0;i<n;i++){  //Method 2 is using built-in max function which didn't worked in computer
    mx=max(mx,arr[i]);
  }
  std::cout<<"The Maximum value of array is "<<mx<<std::endl;
 */



  for(int i=0;i<n;i++){  //Method 3
    for(int j=0;j<i;j++){
      if(arr[j]>arr[i]){
        temp =  arr[j];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  std::cout<<"The Maximum value of array is "<<temp<<std::endl;
}

