#include<iostream>
int main(){
  int sum=0,minimum,temp,product=1,n;
  std::cout<<"How much data do you want to store in that array : "<<std::endl;
  std::cin>>n;
  int arr[n];
  std::cout<<"Enter the elements of array"<<std::endl;
  for(int i=0;i<n;i++){
    std::cin>>arr[i];
  }

  for(int i=0;i<n;i++){  //Method 1
    if (arr[i]<minimum) minimum=arr[i];
  }
  std::cout<<"The minimum value of array is "<<minimum<<std::endl;



 /*   for(int i=0;i<n;i++){  //Method 2 is using built-in max function which didn't worked in computer
    mx=max(mx,arr[i]);
  }
  std::cout<<"The minimum value of array is "<<mx<<std::endl;
 */



  for(int i=0;i<n;i++){  //Method 3
    for(int j=0;j<n;j++){
      if(arr[i]>arr[j]){
        temp =  arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
      }
    }
  }
  std::cout<<"The minimum value of array is "<<temp<<std::endl;
}

