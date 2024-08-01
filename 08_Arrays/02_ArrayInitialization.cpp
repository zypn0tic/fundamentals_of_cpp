#include<iostream>
int main(){
  int arr[5] = {2,4,6,8,10};//can be used with declararion i.e 5 in arr, only valid for same line problems
  for(int i=4;i>=0;i--){//reverse order
    std::cout<<arr[i]<<" ";
  }
}